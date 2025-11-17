package src;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Frame extends JFrame{
    private  JPanel leftPanel;
    private  JPanel centerPanel;
    private JPanel topRightPanel;
    private  JButton switchModeBtn;
    private boolean managerMode= true;

    public Frame(Stock stock) {
        //FRAME
            setTitle("Market");
            setSize(800, 600);
            setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            setLayout(new BorderLayout());

        //PANELS
            //LEFT
                leftPanel= new JPanel();
                leftPanel.setLayout(new BoxLayout(leftPanel, BoxLayout.Y_AXIS));
                add(leftPanel, BorderLayout.WEST);

            //CENTER
                centerPanel= new JPanel();
                centerPanel.setLayout(new BorderLayout());
                add(centerPanel, BorderLayout.CENTER);

            //TOP RIGHT
                topRightPanel= new JPanel();
                switchModeBtn= new JButton("Manager Mode");
                topRightPanel.add(switchModeBtn);
                add(topRightPanel, BorderLayout.NORTH);

            //INITIAL MODE
            loadClientMenu();

        //BUTTONS
            //EVENTS
                //SWITCH BTN
                    switchModeBtn.addActionListener(e -> {
                        managerMode = !managerMode;
                        leftPanel.removeAll();
                        if (managerMode) {
                            loadManagerMenu();
                            switchModeBtn.setText("Client Mode");
                        } else {
                            loadClientMenu();
                            switchModeBtn.setText("Manager Mode");
                        }
                    });

        //VISIBILITY
            setVisible(true);
    }

    private void loadManagerMenu() {
        leftPanel.add(new JButton("Show Stock Items"));
        leftPanel.add(new JButton("Show Stock Value"));
        leftPanel.add(new JButton("Add Product"));
        leftPanel.add(new JButton("Remove Product"));
    }

    private void loadClientMenu() {
        leftPanel.add(new JButton("Add to Cart"));
        leftPanel.add(new JButton("Show cart"));
        leftPanel.add(new JButton("Buy"));
    }
}
