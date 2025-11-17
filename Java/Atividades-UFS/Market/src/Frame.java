package src;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Frame extends JFrame{
    private  JPanel leftPanel;
    private CardLayout leftCards;
    private  JPanel centerPanel;
    private JPanel topRightPanel;
    private  JButton switchModeBtn;
    private boolean managerMode= true;

    private Stock stock;

    public Frame(Stock stock) {
        this.stock= stock;

        String[] columns= {"Produto", "Preço", "Quantidade"};
        Object[][] data= stock.toTableData();
        JTable stockTable= new JTable(data, columns);


        //FRAME
            setTitle("Market");
            setSize(800, 600);
            setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            setLayout(new BorderLayout());

        //PANELS
            //LEFT
                leftCards= new CardLayout();
                leftPanel= new JPanel(leftCards);
                leftPanel.setPreferredSize(new Dimension(240, 0));
                add(leftPanel, BorderLayout.WEST);

            //RIGHT
                topRightPanel= new JPanel();

            //CENTER
                CardLayout centerCards= new CardLayout();
                centerPanel= new JPanel(centerCards);
                add(centerPanel, BorderLayout.CENTER);

                centerPanel.add(new JLabel("Welcome to the Market! How can I help you?"), "HOME");
                centerPanel.add(new JScrollPane(stockTable), "STOCK");
                showInCenter(new JScrollPane(stockTable));
                //centerPanel.add(new JScrollPane(cartTable), "CART");

                centerCards.show(centerPanel, "STOCK");

            //MANAGER/CLIENT
                JPanel managerPanel= buildManagerPanel();
                JPanel clientPanel= buildClientPanel();
                leftPanel.add(managerPanel, "MANAGER");
                leftPanel.add(clientPanel, "CLIENT");

            //INITIAL MODE
                leftCards.show(leftPanel, "CLIENT");

            //SWITCH BTN
                switchModeBtn= new JButton("Manager Mode");
                topRightPanel.add(switchModeBtn);
                add(topRightPanel, BorderLayout.NORTH);

                //EVENTS
                    switchModeBtn.addActionListener(e -> {
                        managerMode = !managerMode;
                        leftCards.show(leftPanel, managerMode ? "MANAGER" : "CLIENT");
                        switchModeBtn.setText(managerMode ? "Client Mode" : "Manager Mode");
                    });

        //VISIBILITY
            setVisible(true);
    }

    private void showInCenter(Component comp) {
        centerPanel.removeAll();
        centerPanel.add(comp, BorderLayout.CENTER);
        centerPanel.revalidate();
        centerPanel.repaint();
    }

    private JPanel buildManagerPanel() {
        JPanel p = new JPanel(new GridLayout(0,1,10,10));
        p.setBorder(BorderFactory.createEmptyBorder(20,20,20,20));

        JButton showStockBtn= createButton("Show Stock Items");
        showStockBtn.addActionListener(e -> {
            JTextArea output= new JTextArea("Products in stock:\n" + stock.getStockItems());
            output.setEditable(false);
            showInCenter(new JScrollPane(output));
        });

        p.add(showStockBtn);
        p.add(createButton("Show Stock Value"));
        p.add(createButton("Add Product"));
        p.add(createButton("Remove Product"));

        return p;
    }

    private JPanel buildClientPanel() {
        JPanel p= new JPanel(new GridLayout(0,1,10,10));
        p.setBorder(BorderFactory.createEmptyBorder(20,20,20,20));
        p.add(createButton("Add to Cart"));
        p.add(createButton("Show Cart"));
        p.add(createButton("Buy"));
        return p;
    }

    private JButton createButton(String text) {
        JButton btn = new JButton(text);
        btn.setFont(new Font("Arial", Font.BOLD, 14));
        btn.setBackground(new Color(60, 120, 200));
        btn.setForeground(Color.WHITE);
        btn.setPreferredSize(new Dimension(200, 40));
        btn.setMaximumSize(new Dimension(200, 40));
        btn.setAlignmentX(Component.CENTER_ALIGNMENT);
        return btn;
    }

}
