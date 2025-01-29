```mermaid

classDiagram
    Armor <|-- Leather
    Armor <|-- Chainmail
    Armor <|-- Gold

    User <|-- Neznaju

    Weapon <|-- Onehand
    Weapon <|-- Twohand

    class Armor{
        +armor_hp()
        +armor_dps()
    }
    class Leather{
        +Leather()
    }
    class Chainmail{
        +Chainmail()
    }
    class Gold{
        +Gold()
    }

    class Onhand{

    }
    

```