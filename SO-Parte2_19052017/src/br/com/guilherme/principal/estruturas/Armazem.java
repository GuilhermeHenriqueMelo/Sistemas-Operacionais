package br.com.guilherme.principal.estruturas;


/**
 * Created by guilh on 30/05/2017.
 */
public class Armazem {
    private int numero;
    private boolean trava;

    public Armazem() {
        this.trava = false;
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public boolean isTravado() {
        return trava;
    }

    public void setTrava(boolean trava) {
        this.trava = trava;
    }
}
