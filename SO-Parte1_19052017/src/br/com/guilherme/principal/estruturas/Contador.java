package br.com.guilherme.principal.estruturas;

import java.util.Random;

/**
 * Created by guilh on 31/05/2017.
 */
public class Contador implements Runnable {
    private Armazem armazem;
    private int count;
    private Random random;

    public Contador(Armazem armazem, int count) {
        this.armazem = armazem;
        this.count = count;
        this.random = new Random();
    }

    @Override
    public void run() {
        for(int i = 1; i <= this.count ; i++) {
            this.armazem.setNumero(i);

            try {
                Thread.sleep(random.nextInt(200));
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
