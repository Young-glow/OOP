#include <iostream>
#include <string>
#include <vector>


class FantasyEntity{
    public:
    std::string name;
    std::string description;
    std::string textureName;
    int hp;
    int attack;
    int mana;

    std::string ToString(){
        return "Name: " + name + "\nDescription: " + description + "\nTexture Name: " + textureName +
               "\nHP: " + std::to_string(hp) + "\nAttack: " + std::to_string(attack) +
               "\nMana: " + std::to_string(mana);
    }
};


class FantasyEntityBuilder{
    protected:
    FantasyEntity* fantasyEntity;
    public:
    void CreateNewEntity() { fantasyEntity = new FantasyEntity(); }
    FantasyEntity* GetMyEntity() { return fantasyEntity; }
    ~FantasyEntityBuilder() { delete fantasyEntity; }
    virtual void setName() = 0;
    virtual void setDescription() = 0;
    virtual void setTextureName() = 0;
    virtual void setHp() = 0;
    virtual void setAttack() = 0;
    virtual void setMana() = 0;
    virtual FantasyEntity* getFantasyEntity() = 0;
};

class WarriorBuilder : public FantasyEntityBuilder{
    public:
    void setName() override { fantasyEntity->name = "Warrior"; }
    void setDescription() override { fantasyEntity->description = "A strong warrior"; }
    void setTextureName() override { fantasyEntity->textureName = "warrior_texture"; }
    void setHp() override { fantasyEntity->hp = 100; }
    void setAttack() override { fantasyEntity->attack = 20; }
    void setMana() override { fantasyEntity->mana = 10; }
    FantasyEntity* getFantasyEntity() override { return fantasyEntity; }
};

class MageBuilder : public FantasyEntityBuilder{
    public:
    void setName() override { fantasyEntity->name = "Mage"; }
    void setDescription() override { fantasyEntity->description = "A powerful mage"; }
    void setTextureName() override { fantasyEntity->textureName = "mage_texture"; }
    void setHp() override { fantasyEntity->hp = 80; }
    void setAttack() override { fantasyEntity->attack = 15; }
    void setMana() override { fantasyEntity->mana = 30; }
    FantasyEntity* getFantasyEntity() override { return fantasyEntity; }
};


class DragonBuilder : public FantasyEntityBuilder{
    public:
    void setName() override { fantasyEntity->name = "Dragon"; }
    void setDescription() override { fantasyEntity->description = "A fierce dragon"; }
    void setTextureName() override { fantasyEntity->textureName = "dragon_texture"; }
    void setHp() override { fantasyEntity->hp = 200; }
    void setAttack() override { fantasyEntity->attack = 50; }
    void setMana() override { fantasyEntity->mana = 0; }
    FantasyEntity* getFantasyEntity() override { return fantasyEntity; }
};

class ElfBuilder : public FantasyEntityBuilder{
    public:
    void setName() override { fantasyEntity->name = "Elf"; }
    void setDescription() override { fantasyEntity->description = "A mystical elf"; }
    void setTextureName() override { fantasyEntity->textureName = "elf_texture"; }
    void setHp() override { fantasyEntity->hp = 70; }
    void setAttack() override { fantasyEntity->attack = 10; }
    void setMana() override { fantasyEntity->mana = 40; }
    FantasyEntity* getFantasyEntity() override { return fantasyEntity; }
};



int main(){
    std::vector<FantasyEntityBuilder*> builders;
    builders.push_back(new WarriorBuilder());
    builders.push_back(new MageBuilder());
    builders.push_back(new DragonBuilder());
    builders.push_back(new ElfBuilder());
    for (auto builder : builders) {
        builder->CreateNewEntity();
        builder->setName();
        builder->setDescription();
        builder->setTextureName(); 
        builder->setHp();
        builder->setAttack();
        builder->setMana();
        FantasyEntity* fantasyEntity = builder->GetMyEntity();
        std::cout << fantasyEntity->ToString() << std::endl;
    }
    
}