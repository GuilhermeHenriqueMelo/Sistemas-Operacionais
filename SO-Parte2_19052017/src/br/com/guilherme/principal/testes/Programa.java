package br.com.guilherme.principal.testes;

/**
 * Created by guilh on 30/05/2017.
 */
public class Programa implements Runnable {
    private int id;

    @Override
    public void run() {
        for(int i = 0; i < 60; i++) {
            System.out.println("Programa " + id + " valor: " + i);
        }
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }
}
