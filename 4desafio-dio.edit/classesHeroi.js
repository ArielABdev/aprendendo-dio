class classeDoHeroi {
    constructor(classHero) {
        this.classHero = classHero;
    }

    attack() {
        let typeAttack = "";

        if (this.classHero === "wizard") {
            typeAttack = "magic";
        } else if (this.classHero === "warrior") {
            typeAttack = "sword";
        } else if (this.classHero === "assasins") {
            typeAttack = "shurikens";
        } else if (this.classHero === "monge") {
            typeAttack = "punchs";
        }

        console.log("The " + this.classHero + " attacked using " + typeAttack);
    }
}

let classe = new classeDoHeroi("wizard");
classe.attack(); // Saída: The wizard attacked using magic
