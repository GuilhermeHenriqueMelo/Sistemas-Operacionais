package br.com.guilherme.principal.estruturas;


import java.util.Random;

/**
 * Created by guilh on 30/05/2017.
 */
public class Impressora implements Runnable {
    private Armazem armazem;
    private int count;
    private Random random;

    public Impressora(Armazem armazem, int count) {
        this.armazem = armazem;
        this.count = count;
        this.random = new Random();
    }

    @Override
    public void run() {
        for(int i = 0; i < this.count; i++) {
            synchronized (this.armazem) {
                while (this.armazem.isTravado()) {
                    try {
                        this.armazem.wait();
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }

                System.out.println(this.armazem.getNumero());
                this.armazem.setTrava(true);

                this.armazem.notifyAll();
            }

            try {
                Thread.sleep(random.nextInt(200));
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
