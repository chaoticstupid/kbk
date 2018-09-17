/***************************************************************************
 *  Original Diku Mud copyright (C) 1990, 1991 by Sebastian Hammer,        *
 *  Michael Seifert, Hans Henrik St{rfeldt, Tom Madsen, and Katja Nyboe.   *
 *                                                                         *
 *  Merc Diku Mud improvments copyright (C) 1992, 1993 by Michael          *
 *  Chastain, Michael Quan, and Mitchell Tse.                              *
 *                                                                         *
 *  In order to use any part of this Merc Diku Mud, you must comply with   *
 *  both the original Diku license in 'license.doc' as well the Merc       *
 *  license in 'license.txt'.  In particular, you may not remove either of *
 *  these copyright notices.                                               *
 *                                                                         *
 *  Thanks to abaddon for proof-reading our comm.c and pointing out bugs.  *
 *  Any remaining bugs are, of course, our work, not his.  :)              *
 *                                                                         *
 *  Much time and thought has gone into this software and you are          *
 *  benefitting.  We hope that you share your changes too.  What goes      *
 *  around, comes around.                                                  *
 ***************************************************************************/

/***************************************************************************
*	ROM 2.4 is copyright 1993-1996 Russ Taylor			   *
*	ROM has been brought to you by the ROM consortium		   *
*	    Russ Taylor (rtaylor@pacinfo.com)				   *
*	    Gabrielle Taylor (gtaylor@pacinfo.com)			   *
*	    Brian Moore (rom@rom.efn.org)				   *
*	By using this code, you have agreed to follow the terms of the	   *
*	ROM license, in the file Tartarus/doc/rom.license                  *
***************************************************************************/

/***************************************************************************
*       Tartarus code is copyright (C) 1997-1998 by Daniel Graham          *
*	In using this code you agree to comply with the Tartarus license   *
*       found in the file /Tartarus/doc/tartarus.doc                       *
***************************************************************************/
/* New titles.c - No longer needed in const.c */
/* Pretty easy to view/edit for short in const.c instead of long. */

#include "include.h"

/*
 * Titles.
 */
char *	const			title_table	[MAX_CLASS][MAX_LEVEL+1][2] =
{
    {
	{ "Man",			"Woman"				},

	{ "Swordpupil",			"Swordpupil"			},
	{ "Recruit",			"Recruit"			},
	{ "Sentry",			"Sentress"			},
	{ "Fighter",			"Fighter"			},
	{ "Soldier",			"Soldier"			},

	{ "Warrior",			"Warrior"			},
	{ "Veteran",			"Veteran"			},
	{ "Swordsman",			"Swordswoman"			},
	{ "Fencer",			"Fenceress"			},
	{ "Combatant",			"Combatess"			},

	{ "Hero",			"Heroine"			},
	{ "Myrmidon",			"Myrmidon"			},
	{ "Swashbuckler",		"Swashbuckleress"		},
	{ "Mercenary",			"Mercenaress"			},
	{ "Swordmaster",		"Swordmistress"			},

	{ "Lieutenant",			"Lieutenant"			},
	{ "Champion",			"Lady Champion"			},
	{ "Dragoon",			"Lady Dragoon"			},
	{ "Cavalier",			"Lady Cavalier"			},
	{ "Knight",			"Lady Knight"			},

	{ "Grand Knight",		"Grand Knight"			},
	{ "Master Knight",		"Master Knight"			},
        { "Grand Warrior",              "Grand Warrior"                       },
        { "Greater Combatant",           "Greater Combatant"                 },
	{ "Demon Slayer",		"Demon Slayer"			},

	{ "Greater Demon Slayer",	"Greater Demon Slayer"		},
	{ "Dragon Slayer",		"Dragon Slayer"			},
	{ "Greater Dragon Slayer",	"Greater Dragon Slayer"		},
	{ "Underlord",			"Underlord"			},
	{ "Overlord",			"Overlord"			},

	{ "Baron of Thunder",		"Baroness of Thunder"		},
	{ "Baron of Storms",		"Baroness of Storms"		},
	{ "Baron of Tornadoes",		"Baroness of Tornadoes"		},
	{ "Baron of Hurricanes",	"Baroness of Hurricanes"	},
	{ "Baron of Meteors",		"Baroness of Meteors"		},

        { "Rock Crusher",       "Rock Crusher"  },
        { "Shield Cleaver",     "Shield Cleaver"        },
        { "Student of War",     "Student of War"        },
        { "Learned of War",     "Learned of War"        },
        { "Master of War",      "Mistress of War"       },

        { "Bone Shatterer",  "Bone Shatterer"     },
        { "Skull Cracker",  "Skull Cracker"     },
        { "Armor Splitter",   "Armor Splitter"    },
        { "Sword Breaker",      "Sword Breaker"         },
        { "Weapon Master",      "Weapon Mistress"       },

        { "Student of Battle",  "Student of Battle"     },
        { "Learned of Battle",  "Learned of Battle"     },
        { "Master of Battle",   "Mistress of Battle"    },
        { "Grand Battle Master",        "Grand Battle Mistress"   },
        { "Supreme Battle Master",      "Supreme Battle Mistress"       },

	{ "Knight Hero",		"Knight Heroine"		},
        { "Avatar",              "Avatar"                 },
        { "Angel",               "Angel"                  },
        { "Demigod",             "Demigoddess"            },
        { "Immortal",           "Immortal"              },
        { "God",                 "God"                    },
        { "Deity",               "Deity"                  },
        { "Supreme Master",      "Supreme Mistress"       },
        { "Creator",                    "Creator"                       },
	{ "Implementor",		"Implementress"			}
    },
    {
	{ "Man",			"Woman"				},

	{ "Pilferer",			"Pilferess"			},
	{ "Footpad",			"Footpad"			},
	{ "Filcher",			"Filcheress"			},
	{ "Pick-Pocket",		"Pick-Pocket"			},
	{ "Sneak",			"Sneak"				},

	{ "Pincher",			"Pincheress"			},
	{ "Cut-Purse",			"Cut-Purse"			},
	{ "Snatcher",			"Snatcheress"			},
	{ "Sharper",			"Sharpress"			},
	{ "Rogue",			"Rogue"				},

	{ "Robber",			"Robber"			},
	{ "Magsman",			"Magswoman"			},
	{ "Highwayman",			"Highwaywoman"			},
	{ "Burglar",			"Burglaress"			},
	{ "Thief",			"Thief"				},

	{ "Knifer",			"Knifer"			},
	{ "Quick-Blade",		"Quick-Blade"			},
	{ "Killer",			"Murderess"			},
	{ "Brigand",			"Brigand"			},
	{ "Cut-Throat",			"Cut-Throat"			},

	{ "Spy",			"Spy"				},
	{ "Grand Spy",			"Grand Spy"			},
	{ "Master Spy",			"Master Spy"			},
        { "Greater Thief",              "Greater Thief"                      },
        { "Master of Thievery",         "Mistress of Thievery"              },

	{ "Master of Vision",		"Mistress of Vision"		},
	{ "Master of Hearing",		"Mistress of Hearing"		},
	{ "Master of Smell",		"Mistress of Smell"		},
	{ "Master of Taste",		"Mistress of Taste"		},
	{ "Master of Touch",		"Mistress of Touch"		},

	{ "Crime Lord",			"Crime Mistress"		},
	{ "Infamous Crime Lord",	"Infamous Crime Mistress"	},
	{ "Greater Crime Lord",		"Greater Crime Mistress"	},
	{ "Master Crime Lord",		"Master Crime Mistress"		},
	{ "Godfather",			"Godmother"			},

        { "Student of Speed",   "Student of Speed"      },
        { "Learned of Speed",   "Learned of Speed"      },
        { "Master of Speed",    "Mistress of Speed"     },
        { "Shadow",     "Shadow"        },
        { "Master of Shadows",  "Mistress of Shadows"   },

        { "Hidden",     "Hidden"        },
        { "Unseen",     "Unseen"        },
        { "Undetectable",       "Undetectable"  },
        { "Untouchable",        "Untouchable"   },
        { "Covert",    "Covert"       },

        { "Master of Disguise",     "Mistress of Disguise"        },
        { "Master Blackjacker",    "Mistress Blackjacker"       },
        { "Master Backstabber",     "Mistress Backstabber"        },
        { "Master of the Blade",   "Mistress of the Blade"      },
        { "Grand Master of Thieves",    "Grand Mistress of Thieves"     },

        { "Thief Hero",              "Thief Heroine"              },
        { "Avatar",            "Avatar",              },
        { "Angel",             "Angel"                },
        { "Demigod",       "Demigoddess"      },
        { "Immortal",           "Immortal"             },
        { "God",           "God",             },
        { "Deity",         "Deity"            },
	{ "Supreme Master",		"Supreme Mistress"		},
        { "Creator",                    "Creator"                       },
	{ "Implementor",		"Implementress"			}
    },
    {
	{ "Man",			"Woman"				},

	{ "Apprentice of Magic",	"Apprentice of Magic"		},
        { "Altar Boy",  "Altar Girl"    },
        { "Believer",   "Believer"      },
        { "Attendant", "Attendant"      },
        { "Acolyte", "Acolyte"  },

        { "Novice", "Novice"    },
        { "Hermit", "Hermit"    },
        { "Monk", "Nun"         },
        { "Adept", "Adept"      },
        { "Deacon", "Deaconess" },

        { "Seminary Student", "Seminary Student"        },
        { "Seminary Scholar", "Seminary Scholar"        },
        { "Receiver of the Call", "Receiver of the Call" },
        { "Chosen", "Chosen"    },
        { "Ordained", "Ordained"        },

        { "Priest", "Priestess"         },
        { "Minister", "Lady Minister"   },
        { "Curate", "Curate"    },
        { "Canon", "Canon"      },
        { "Healer", "Healeress"         },

        { "Chaplain", "Chaplain"        },
        { "Expositor", "Expositoress"   },
        { "Missionary", "Missionary"    },
        { "Seminary Teacher", "Seminary Teacher"        },
        { "Bishop", "Bishop"    },

        { "Arch Bishop", "Arch Bishop"  },
        { "Patriarch", "Matriarch"      },
        { "Elder Patriarch", "Elder Matriarch"  },
        { "Grand Patriarch", "Grand Matriarch"  },
        { "Great Patriarch", "Great Matriarch"  },

        { "Exorcist", "Exorcist"        },
        { "Demon Killer", "Demon Killer"        },
        { "Greater Demon Killer", "Greater Demon Killer"        },
        { "Cardinal of the Earth", "Cardinal of the Earth"      },
        { "Cardinal of the Seas", "Cardinal of the Seas"        },

        { "Cardinal of the Winds", "Cardinal of the Winds"      },
        { "Cardinal of the Fire", "Cardinal of the Fire"        },
        { "Cardinal of the Ether", "Cardinal of the Ether"      },
        { "Cardinal of the North", "Cardinal of the North"      },
        { "Cardinal of the East", "Cardinal of the East"        },

        { "Cardinal of the South", "Cardinal of the South"      },
        { "Cardinal of the West", "Cardinal of the West"        },
        { "Avatar of an Immortal", "Avatar of an Immortal"      },
        { "Avatar of a Deity", "Avatar of a Deity"      },
        { "Avatar of a God", "Avatar of a God"  },

        { "Avatar of an Implementor", "Avatar of an Implementor"        },
        { "Master of Divinity", "Mistress of Divinity"  },
        { "Saint", "Saint"      },
        { "Divine", "Divine"    },
        { "Holy Father", "Holy Mother"  },

        { "Avatar of Faith",                  "Avatar of Faith"                  },
        { "Avatar",            "Avatar"               },
        { "Angel",             "Angel"                },
        { "Demigod",           "Demigoddess"          },
        { "Immortal",          "Immortal"             },
        { "God",               "Goddess"              },
        { "Deity",             "Deity"                },
        { "Supremity",         "Supremity"            },
	{ "Creator",			"Creator"			},
	{ "Implementor",		"Implementress"			}
    },

    {
	{ "Man",			"Woman"				},

        { "Paladin Pupil", "Paladin Pupil" },
        { "Scullery Man", "Scullery Maid" },
        { "Squire Candidate", "Squire Candidate" },
        { "Shield Bearer", "Shield Bearer" },
        { "Sword Bearer", "Sword Bearer" },

        { "Bow Bearer", "Bow Bearer" },
        { "Standard Bearer", "Standard Bearer" },
        { "Horseman", "Horsewoman" },
        { "Squire Initiate", "Squire Initiate" },
        { "Squire", "Squire" },

        { "Footman", "Footwoman" },
        { "Pikeman", "Pikewoman" },
        { "Bowman", "Bowwoman" },
        { "Swordsman", "Swordsman" },
        { "Honorable", "Honorable" },

        { "Noble", "Noble" },
        { "Trustworthy", "Trustworthy" },
        { "Truthful", "Truthful" },
        { "Chivalrous", "Chivalrous" },
        { "Paladin", "Paladin" },

        { "Questor", "Questor" },
        { "Cavalier", "Cavalier" },
        { "Champion", "Champion" },
        { "Knight of Renown", "Knight of Renown" },
        { "Paladin Knight", "Paladin Knight" },

        { "Templar Initiate", "Templar Initiate" },
        { "Priest-Knight", "Priestess-Knight" },
        { "Knight of the Cross", "Knight of the Cross" },
        { "Champion of the Cross", "Champion of the Cross" },
        { "Knight Templar", "Lady Templar" },

        { "Warrior of the White Rose", "Warrior of the White Rose" },
        { "Knight of the White Rose", "Lady of the White Rose" },
        { "Master of the White Rose", "Mistress of the White Rose" },
        { "Prince of the White Rose", "Princess of the White Rose" },
        { "King of the White Rose", "Queen of the White Rose" },

        { "Valiant", "Valiant" },
        { "Courageous", "Courageous" },
        { "Healer-Knight", "Healer-Lady" },
        { "Avenger", "Avenger" },
        { "Defender", "Defender" },

        { "Protector of Innocents", "Protector of Innocents" },
        { "Champion of Innocents", "Champion of Innocents" },
        { "Champion of the Templars", "Champion of the Templars" },
        { "Priest of the Templars", "Priestess of the Templars" },
        { "High Priest of the Templars", "High Priestess of the Templars" },

        { "Lord of the Templars", "Lady of the Templars" },
        { "Hammer of Heretics", "Hammer of Heretics" },
        { "Slayer of Infidels", "Slayer of Infidels" },
        { "Pious", "Pious" },
        { "Holy Knight", "Holy Lady" },

        { "Paladin Hero",                  "Paladin Heroine"                  },
        { "Avatar",            "Avatar"               },
        { "Angel",             "Angel"                },
        { "Demigod",           "Demigoddess"          },
        { "Immortal",          "Immortal"             },
        { "God",               "Goddess"              },
        { "Deity",             "Deity"                },
        { "Supremity",         "Supremity"            },
	{ "Creator",			"Creator"			},
	{ "Implementor",		"Implementress"			}
    },

    {
	{ "Man",			"Woman"				},

        { "Scum", "Scum" },
        { "Bully", "Bully" },
        { "Thug", "Moll" },
        { "Brute", "Brute" },
        { "Ruffian", "Ruffian" },

        { "Pillager", "Pillager" },
        { "Destroyer", "Destroyer" },
        { "Arsonist", "Arsonist" },
        { "Hired Killer", "Hired Killer" },
        { "Brigand", "Brigand" },

        { "Mercenary", "Mercenary" },
        { "Black Sword", "Black Sword" },
        { "Crimson Sword", "Crimson Sword" },
        { "Black Hearted", "Black Hearted" },
        { "Cruel", "Cruel" },

        { "Stealer", "Stealer" },
        { "Infamous", "Infamous" },
        { "Despised", "Despised" },
        { "Complete Bastard", "Complete Bitch" },
        { "Anti-Paladin", "Anti-Paladin" },

        { "Evil Fighter", "Evil Fighter" },
        { "Rogue Knight", "Rogue Lady" },
        { "Evil Champion", "Evil Champion" },
        { "Slayer of Innocents", "Slayer of Innocents" },
        { "Black Knight", "Black Lady" },

        { "Crimson Knight", "Crimson Lady" },
        { "Knight of Brimstone", "Lady of Brimstone" },
        { "Knight of the Inverted Cross", "Lady of the Inverted Cross" },
        { "Knight of Pain", "Lady of Pain" },
        { "Knight of Darkness", "Lady of Darkness" },

        { "Footman of Darkness", "Footwoman of Darkness" },
        { "Cavalier of Darkness", "Cavalier of Darkness" },
        { "Captain of Darkness", "Captain of Darkness" },
        { "General of Darkness", "General of Darkness" },
        { "Field Marshall of Darkness", "Field Marshall of Darkness" },

        { "Knight of the Apocalypse", "Lady of the Apocalypse" },
        { "LightSlayer", "LightSlayer" },
        { "Invoker of Suffering", "Invoker of Suffering" },
        { "Arch-Fiend", "Arch-Friend" },
        { "Evil Lord", "Evil Lady" },

        { "Evil Prince", "Evil Princess" },
        { "Evil King", "Evil Queen" },
        { "Destroyer of Hope", "Destroyer of Hope" },
        { "Spreader of Pestilence", "Spreader of Pestilence" },
        { "Bringer of Famine", "Bringer of Famine" },

        { "Harbinger of Death", "Harbinger of Death" },
        { "Herald of Doom", "Herald of Doom" },
        { "Dark Slayer", "Dark Slayer" },
        { "Evil Incarnate", "Evil Incarnate" },
        { "Hand of the Dark", "Hand of the Dark" },

        { "Anti-Hero",                  "Anti-Heroine"                  },
        { "Avatar",            "Avatar"               },
        { "Angel",             "Angel"                },
        { "Demigod",           "Demigoddess"          },
        { "Immortal",          "Immortal"             },
        { "God",               "Goddess"              },
        { "Deity",             "Deity"                },
        { "Supremity",         "Supremity"            },
	{ "Creator",			"Creator"			},
	{ "Implementor",		"Implementress"			}
    },

    {
	{ "Man",			"Woman"				},

        { "Forest Pupil", "Forest Pupil" },
        { "Forest Recruit", "Forest Recruit" },
        { "Forest Squire", "Forest Squire" },
        { "Forester", "Forester" },
        { "Apprentice Forester", "Apprentice Forester" },

        { "Forester", "Forester" },
        { "Master Forester", "Mistress Forester" },
        { "Trapper", "Trapper" },
        { "Hunter", "Hunter" },
        { "Scout", "Scout" },

        { "Master Scout", "Mistress Scout" },
        { "Tracker", "Tracker" },
        { "Master Tracker", "Master Tracker" },
        { "Forest Walker", "Forest Walker" },
        { "Woodsman", "Woodswoman" },

        { "Master Woodsman", "Mistress Woodswoman" },
        { "Ranger Initiate", "Ranger Initiate" },
        { "Ranger Candidate", "Ranger Candidate" },
        { "Ranger Squire", "Ranger Squire" },
        { "Apprentice Ranger", "Apprentice Ranger" },

        { "Ranger", "Ranger" },
        { "Greater Ranger", "Greater Ranger" },
        { "Ranger Captain", "Ranger Captain" },
        { "Ranger General", "Ranger General" },
        { "Master Ranger", "Mistress Ranger" },

        { "Ranger Lord", "Ranger Lady" },
        { "Ranger Baron", "Ranger Baroness" },
        { "Ranger Prince", "Ranger Princess" },
        { "Ranger King", "Ranger Queen" },
        { "Warder", "Warder" },

        { "Warder Captain", "Warder Captain" },
        { "Warder General", "Warder General" },
        { "Master of Warders", "Master of Warders" },
        { "Lord of Warders", "Lady of Warders" },
        { "Warder Baron", "Warder Baroness" },

        { "Warder Prince", "Warder Princess" },
        { "Warder King", "Warder King" },
        { "Warrior of the Forest", "Warrior of the Forest" },
        { "Sword of the Forest", "Sword of the Forest" },
        { "Knight of the Forest", "Knight of the Forest" },

        { "Master of the Forest", "Mistress of the Forest" },
        { "Lord of the Forest", "Lady of the Forest" },
        { "Baron of the Forest", "Baron of the Forest" },
        { "Prince of the Forest", "Princess of the Forest" },
        { "King of the Forest", "Queen of the Forest" },

        { "Watcher of the Glade", "Watcher of the Glade" },
        { "Defender of the Glade", "Defender of the Glade" },
        { "Keeper of the Glade", "Keeper of the Glade" },
        { "Preserver of Nature", "Preserver of Nature" },
        { "Supreme Protector of Nature", "Supreme Protector of Nature" },

        { "Ranger Hero",                  "Ranger Heroine"                  },
        { "Avatar",            "Avatar"               },
        { "Angel",             "Angel"                },
        { "Demigod",           "Demigoddess"          },
        { "Immortal",          "Immortal"             },
        { "God",               "Goddess"              },
        { "Deity",             "Deity"                },
        { "Supremity",         "Supremity"            },
	{ "Creator",			"Creator"			},
	{ "Implementor",		"Implementress"			}
    },

        {
        { "Man",        "Woman"                         },
        { "Novice",     "Novice",                       },      /* 1 */
        { "White Belt", "White Belt"                    },
        { "Monastic",   "Monastic"                      },
        { "Thoughtful", "Thoughtful"                    },
        { "Novice pugilist",    "Novice Pugilist"       }, /* 5 */
        { "Scholar of Combat",  "Scholar of Combat"     },
        { "Yellow Belt",        "Yellow Belt"           },
        { "Learned pugilist",   "Learned Pugilist"      },
        { "Scholar of War",     "Scholar of War"        },
        { "Unarmed Fighter",    "Unarmed Fighter"       },      /* 10 */
        { "Orange Belt",        "Orange Belt"           },
        { "Boxer",              "Boxer"                 },
        { "Kickboxer",          "Kickboxer"             },
        { "Green Belt",         "Green Belt"            },
        { "Learned Combatant",  "Learned Combatant"     }, /* 15 */
        { "Blue Belt",          "Blue Belt"             },
        { "Red Belt",           "Red Belt"              },
        { "Novice Monk",        "Novice Monk"           },
        { "Initiate Monk",      "Initiate Monk"         },
        { "Monk",               "Monk"                  },     /* 20 */
        { "Brown Belt",         "Brown Belt"            },
        { "Expert Pugilist",    "Expert Pugilist"       },
        { "2nd Brown",          "2nd Brown"             },
        { "Master Pugilist",    "Mistress Pugilist"     },
        { "Black Belt",         "Black Belt"            },      /* 25 */
        { "Second Dan",         "Second Dan"            },
        { "Third Dan",          "Third Dan"             },
        { "Master of Akemi",    "Mistress of Akemi"     },
        { "Master of Patience", "Mistress of Patience"  },
        { "Master of Thought",  "Mistress of Thought"   },  /* 30 */
        { "Master of Mind",     "Mistress of Mind"      },
        { "Master of Combat",   "Mistress of Combat"    },
        { "Master of Unarmed Combat", "Mistress of Unarmed Combat"},
        { "Tranquil",           "Tranquil",             },
        { "Master of Shuto",    "Mistress of Shuto"     },      /* 35 */
        { "Enlightened",        "Enlightened"           },
        { "Lore Master",        "Lore Mistress"         },
        { "Adept",              "Adept"                 },
        { "Adept of Wind",      "Adept of Wind"         },
        { "Adept of Mind",      "Adept of Mind"         },      /* 40 */
        { "Adept of Thought",   "Adept of Thought"      },
        { "Adept of State",     "Adept of State"        },
        { "Kaiden",             "Kaiden"                },
        { "Sensei",             "Sensei"                },
        { "Sensei",             "Sensei"                },      /* 45 */
        { "Shihan",             "Shihan"                },
        { "Archon of Thought",  "Archon of Thought"     },
        { "Archon of State",    "Archon of State"       },
        { "Transcendant",       "Transcendant"          },
        { "Lord Adept",         "Lady Adept"            },  /* 50 */
        { "Hero of the Druids",          "Heroine of the Druids"          },
	{ "Avatar of Magic",		"Avatar of Magic"		},
	{ "Angel of Magic",		"Angel of Magic"		},
	{ "Demigod of Magic",		"Demigoddess of Magic"		},
	{ "Immortal of Magic",		"Immortal of Magic"		},
	{ "God of Magic",		"Goddess of Magic"		},
	{ "Deity of Magic",		"Deity of Magic"		},
	{ "Supremity of Magic",		"Supremity of Magic"		},
	{ "Creator",			"Creator"			},
	{ "Implementor",		"Implementress"			}
    },

    {
	{ "Man",			"Woman"				},
{"Apprentice Channeler", "Apprentice Channeler"},
{"Student of Channeling",
"Student of Channeling"},
{"Journeyman Channeler", "Journeywoman Channeler"},
{"Novice Channeler","Novice Channeler"},
{"Medium of Channeling","Medium of Channeling"},
{"Apprentice Scrivener","Apprentice Scrivener"},
{"Journeyman Scrivener", "Journeywoman Scrivener"},
{"Scrivener","Scrivener"},
{"Accomplished Scrivener","Accomplished Scrivener"},
{"Master Scribe","Master Scribe"},
{"Apprentice Alchemist","Apprentice Alchemist"},
{"Student of Alchemy","Student of Alchemy "},
{"Journeyman Alchemist", "Jourenywoman Alchemist"},
{"Alchemist","Alchemist"},
{"Master of Alchemy","Master of Alchemy"},
{"Wizard", "Witch"},
{"Sorcerer","Sorceress"},
{"Grand Sorcerer","Grand Sorceress"},
{"Master of Sorcery", "Mistress of Sorcery"},
{"Channeler","Channeler"},
{"Maker of Stones","Maker of Stones"},
{"Maker of Wands","Maker of Wands"},
{"Maker of Potions","Maker of Potions"},
{"Maker of Staves","Maker of Staves"},
{"Craftsman", "Craftswoman",},
{"Master Craftsman", "Mistress Craftswoman"},
{"Student of Light","Student of Light"},
{"Student of Focus","Student of Focus"},
{"Student of Absorption","Student of Absorption"},
{"Student of Form","Student of Form"},
{"Student of Space","Student of Space"},
{"Student of Time","Student of Time"},
{"Wizard of Light","Wizard of Light"},
{"Wizard of Focus","Wizard of Focus"},
{"Wizard of Absorption","Wizard of Absorption"},
{"Wizard of Form","Wizard of Form"},
{"Wizard of Space","Wizard of Space"},
{"Temporal Wizard","Temporal Wizard"},
{"Temporal Master", "Temporal Mistress"},
{"Mystic","Mystic"},
{"Grand Mystic","Grand Mystic"},
{"Master Mystic", "Mistress Mystic"},
{"Archmage of Light","Archmage of Light"},
{"Archmage of Focus","Archmage of Focus"},
{"Archmage of Absorption","Archmage of Absorption"},
{"Archmage of Form","Archmage of Form"},
{"Archmage of Space","Archmage of Space"},
{"Temporal Archmage","Temporal Archmage"},
{"Archmage of Mystism","Archmage of Mystism"},
{"Archmage of Channeling","Archmage of Channeling"},
{"Hero of Magical Transferance", "Heroine of Magical Transferance"},

	{ "Avatar of Magic",		"Avatar of Magic"		},
	{ "Angel of Magic",		"Angel of Magic"		},
	{ "Demigod of Magic",		"Demigoddess of Magic"		},
	{ "Immortal of Magic",		"Immortal of Magic"		},
	{ "God of Magic",		"Goddess of Magic"		},
	{ "Deity of Magic",		"Deity of Magic"		},
	{ "Supremity of Magic",		"Supremity of Magic"		},
	{ "Creator",			"Creator"			},
	{ "Implementor",		"Implementress"			}
    },

    {
	{ "Man",			"Woman"				},

        { "Uke", "Uke"  },
        { "Tori", "Tori"        },
        { "White Belt", "White Belt"    },
        { "Yellow Belt", "Yellow Belt"  },
        { "Green Belt", "Green Belt"    },

        { "3rd Brown", "3rd Brown"      },
        { "2nd Brown", "2nd Brown"      },
        { "1st Brown", "1st Brown"      },
        { "3rd Black", "3rd Black"      },
        { "2nd Black", "2nd Black"      },

        { "Okuri", "Okuri"      },
        { "Shuto", "Shuto"      },
        { "Uraken", "Uraken"    },
        { "Hidden", "Hidden"    },
        { "Shrouded", "Shrouded"        },

        { "Prowler", "Prowler"  },
        { "Tailer", "Tailer"    },
        { "Stalker", "Stalker"  },
        { "Master Stalker", "Master Stalker"    },
        { "Nightwalker", "Nightwalker"  },

        { "Master of the Shadows", "Mistress of the Shadows"    },
        { "Master of the Darkness", "Mistress of the Darkness"  },
        { "Master of the Night", "Mistress of the Night"  },
        { "King of Black", "King of Black"      },
        { "Shadowwalker", "Shadowwalker"        },

        { "Master of Stealth", "Mistress of Stealth"      },
        { "Master of Initiative", "Mistress of Initiative"      },
        { "Master of Surprise", "Mistress of Surprise"  },
        { "Contracted Killer", "Contracted Killer"      },
        { "Assassin", "Assassin"        },

        { "Master of Guile", "Mistress of Guile"  },
        { "Master of Severance", "Mistress of Severance"        },
        { "Master of the Blade", "Mistress of the Blade"        },
        { "Mad Knifer", "Mad Knifer"    },
        { "Slasher", "Slasher"  },

        { "Lord of the Night", "Lady of the Night"      },
        { "Prince of the Night", "Princess of the Night"        },
        { "King of the Night", "Queen of the Night"     },
        { "Overlord of Darkness", "Overlord of Darkness"        },
        { "Malevolent", "Malevolent"    },

        { "Sadist", "Sadist"    },
        { "Malignant", "Malignant"      },
        { "Conspirator", "Conspirator"  },
        { "Despised", "Despised"        },
        { "Forsaken", "Forsaken"        },

        { "Unseen", "Unseen"    },
        { "Unheard", "Unheard"  },
        { "Unknown", "Unknown"  },
        { "Unspeakable Thing", "Unspeakable Thing"      },
        { "Unholy Terror", "Unholy Terror"      },


        { "Assassin Hero",     "Assassin Hero"                  },
        { "Avatar",            "Avatar"               },
        { "Angel",             "Angel"                },
        { "Demigod",           "Demigoddess"          },
        { "Immortal",          "Immortal"             },
        { "God",               "Goddess"              },
        { "Deity",             "Deity"                },
        { "Supremity",         "Supremity"            },
	{ "Creator",			"Creator"			},
	{ "Implementor",		"Implementress"			}
    },

    {
	{ "Man",			"Woman"				},

        { "Apprentice of Black Magic", "Apprentice of Black Magic" },
        { "Student of Dark Spells", "Student of Dark Spells" },
        { "Scholar of Dark Magic", "Scholar of Dark Magic" },
        { "Delver in Dark Spells", "Delver in Dark Spells" },
        { "Channeler of Dark Forces", "Channeler of Dark Forces" },

        { "Scribe of Black Magic", "Scribe of Black Magic" },
        { "Dark Seer", "Dark Seer" },
        { "Dark Sage", "Dark Sage" },
        { "Apprentice of Dark Illusions", "Apprentice of Dark Illusions" },
        { "Student of Dark Illusions", "Student of Dark Illusions" },

        { "Dark Illusionist", "Dark Illusionist" },
        { "Master of Dark Illusions", "Mistress of Dark Illusions" },
        { "Conjurer of Evil", "Conjurer of Evil" },
        { "Evil Magician", "Evil Magician" },
        { "Evil Creator", "Evil Creator" },

        { "Evil Savant", "Evil Savant" },
        { "Warlock", "Witch" },
        { "Sorcerer", "Sorceress" },
        { "Grand Sorcerer", "Grand Sorceress" },
        { "Apprentice Golem Maker", "Apprentice Golem Maker" },

        { "Golem Maker", "Golem Maker" },
        { "Creator of Disease", "Creator of Disease" },
        { "Hurler of Acid", "Hurler of Acid" },
        { "Ghostly Illusionist", "Ghostly Illusionist" },
        { "Apprentice Animator", "Apprentice Animator" },

        { "Animator", "Animator" },
        { "Archmage of Animation", "Archmage of Animation" },
        { "Bringer of Plague", "Bringer of Plague" },
        { "Necromancer", "Necromancer" },
        { "Apprentice Summoner", "Apprentice Summoner" },

        { "Summoner", "Summoner" },
        { "Archmage of Summoning", "Archmage of Summoning" },
        { "Apprentice Summoner of Demons", "Apprentice Summoner of Demons" },
        { "Summoner of Demons", "Summoner of Demons" },
        { "Archmage Summoner of Demons", "Archmage Summoner of Demons" },

        { "Abominable Archmage", "Abominable Archmage" },
        { "Malefic Archmage", "Malefic Archmage" },
        { "Infernal Archmage", "Infernal Archmage" },
        { "Malevolent Archmage", "Malevolent Archmage" },
        { "Apprentice Occultist", "Apprentice Occultist" },

        { "Student of the Occult", "Student of the Occult" },
        { "Occultist", "Occultist" },
        { "Archmage of the Occult", "Archmage of the Occult" },
        { "Student of Black Magic", "Student of Black Magic" },
        { "Archmage of Black Magic", "Archmage of Black Magic" },

        { "Archmage of Necromancy", "Archmage of Necromancy" },
        { "Spectral Archmage", "Spectral Archmage" },
        { "Archmagical Wraith", "Archmagical Wraith" },
        { "Lich", "Lich" },
        { "Lich Lord", "Lich Lady" },

        { "Hero of the Undead",              "Heroine of the Undead"      },
        { "Avatar",            "Avatar"               },
        { "Angel",             "Angel"                },
        { "Demigod",           "Demigoddess"          },
        { "Immortal",          "Immortal"             },
        { "God",               "Goddess"              },
        { "Deity",             "Deity"                },
        { "Supremity",         "Supremity"            },
	{ "Creator",			"Creator"			},
	{ "Implementor",		"Implementress"			}
    },

    {
	{ "Man",			"Woman"				},

        { "Apprentice of Magic", "Apprentice of Magic" },
        { "Spell Student", "Spell Student" },
        { "Scholar of Magic", "Scholar of Magic" },
        { "Delver in Spells", "Delver in Spells" },
        { "Medium of Magic", "Medium of Magic" },

        { "Scribe of Magic", "Scribe of Magic" },
        { "Seer", "Seer" },
        { "Sage", "Sage" },
        { "Illusionist", "Illusionist" },
        { "Abjurer", "Abjurer" },

        { "Invoker", "Invoker" },
        { "Conjurer", "Conjurer" },
        { "Magician", "Magician" },
        { "Creator", "Creator" },
        { "Savant", "Savant" },

        { "Magus", "Magus" },
        { "Wizard", "Witch" },
        { "Warlock", "War Witch" },
        { "Elemental Apprentice", "Elemental Apprentice" },
        { "Elemental Magician", "Elemental Magician" },

        { "Student of the Elements", "Student of the Elements" },
        { "Student of Fire", "Student of Fire" },
        { "Student of Ice", "Student of Ice" },
        { "Student of Earth", "Student of Earth" },
        { "Student of Water", "Student of Water" },

        { "Student of Air", "Student of Air" },
        { "Student of Ether", "Student of Ether" },
        { "Student of Conjuration", "Student of Conjuration" },
        { "Student of Abjuration", "Student of Abjuration" },
        { "Elder Elemental Magician", "Elder Elemental Magician" },

        { "Learned of the Elements", "Learned of the Elements" },
        { "Master of Fire", "Mistress of Fire" },
        { "Master of Ice", "Mistress of Ice" },
        { "Master of Earth", "Mistress of Earth" },
        { "Master of Water", "Mistress of Water" },

        { "Master of Air", "Mistress of Air" },
        { "Master of Ether", "Mistress of Ether" },
        { "Master of Conjuration", "Mistress of Conjuration" },
        { "Master of Abjuration", "Mistress of Abjuration" },
        { "Master of the Elements", "Mistress of the Elements" },

        { "Greater Elemental Magician", "Greater Elemental Magician" },
        { "Master of Alteration", "Mistress of Alteration" },
        { "Master of Evocation", "Mistress of Evocation" },
        { "Master of Creation", "Mistress of Creation" },
        { "Grand Elemental Magician", "Grand Elemental Magician" },

        { "Commander of Air", "Commander of Air" },
        { "Summoner of Water", "Summoner of Water" },
        { "Caller of Fire", "Caller of Fire" },
        { "Wielder of Earth", "Wielder of Earth" },
        { "Grand Master of the Elements", "Grand Mistress of the Elements" },

        { "Elemental Hero",             "Elemental Heroine"                  },
        { "Avatar",                "Avatar"                   },
	{ "Angel",			"Angel"				},
	{ "Demigod",			"Demigoddess",			},
	{ "Immortal",			"Immortal"			},
	{ "God",			"Goddess"			},
	{ "Deity",			"Deity"				},
	{ "Supreme Master",		"Supreme Mistress"		},
        { "Creator",                    "Creator"                       },
	{ "Implementor",		"Implementress"			}
    },
    
        {
	{ "Man",			"Woman"				},

        { "Apprentice of Magic", "Apprentice of Magic" },
        { "Spell Student", "Spell Student" },
        { "Scholar of Magic", "Scholar of Magic" },
        { "Delver in Spells", "Delver in Spells" },
        { "Medium of Magic", "Medium of Magic" },

        { "Scribe of Magic", "Scribe of Magic" },
        { "Seer", "Seer" },
        { "Sage", "Sage" },
        { "Illusionist", "Illusionist" },
        { "Abjurer", "Abjurer" },

        { "Invoker", "Invoker" },
        { "Conjurer", "Conjurer" },
        { "Magician", "Magician" },
        { "Creator", "Creator" },
        { "Savant", "Savant" },

        { "Magus", "Magus" },
        { "Wizard", "Witch" },
        { "Warlock", "War Witch" },
        { "Elemental Apprentice", "Elemental Apprentice" },
        { "Elemental Magician", "Elemental Magician" },

        { "Student of the Elements", "Student of the Elements" },
        { "Student of Fire", "Student of Fire" },
        { "Student of Ice", "Student of Ice" },
        { "Student of Earth", "Student of Earth" },
        { "Student of Water", "Student of Water" },

        { "Student of Air", "Student of Air" },
        { "Student of Ether", "Student of Ether" },
        { "Student of Conjuration", "Student of Conjuration" },
        { "Student of Abjuration", "Student of Abjuration" },
        { "Elder Elemental Magician", "Elder Elemental Magician" },

        { "Learned of the Elements", "Learned of the Elements" },
        { "Master of Fire", "Mistress of Fire" },
        { "Master of Ice", "Mistress of Ice" },
        { "Master of Earth", "Mistress of Earth" },
        { "Master of Water", "Mistress of Water" },

        { "Master of Air", "Mistress of Air" },
        { "Master of Ether", "Mistress of Ether" },
        { "Master of Conjuration", "Mistress of Conjuration" },
        { "Master of Abjuration", "Mistress of Abjuration" },
        { "Master of the Elements", "Mistress of the Elements" },

        { "Greater Elemental Magician", "Greater Elemental Magician" },
        { "Master of Alteration", "Mistress of Alteration" },
        { "Master of Evocation", "Mistress of Evocation" },
        { "Master of Creation", "Mistress of Creation" },
        { "Grand Elemental Magician", "Grand Elemental Magician" },

        { "Commander of Air", "Commander of Air" },
        { "Summoner of Water", "Summoner of Water" },
        { "Caller of Fire", "Caller of Fire" },
        { "Wielder of Earth", "Wielder of Earth" },
        { "Grand Master of the Elements", "Grand Mistress of the Elements" },

        { "Bard Hero",          	"Bard Heroine"          	},
        { "Avatar",                	"Avatar"  	                },
	{ "Angel",			"Angel"				},
	{ "Demigod",			"Demigoddess",			},
	{ "Immortal",			"Immortal"			},
	{ "God",			"Goddess"			},
	{ "Deity",			"Deity"				},
	{ "Supreme Master",		"Supreme Mistress"		},
        { "Creator",                    "Creator"                       },
	{ "Implementor",		"Implementress"			}
    },

        {

        { "Man",			"Woman"				},
        { "Believer",			"Believer"			},      /* 1 */
        { "Scribe",			"Scribe"			},
        { "Missionary",			"Missionary"			},
        { "Novice",			"Novice"			},
        { "Brother",			"Nun"				},	/* 5 */
        { "Curate",			"Curate"			}, 
        { "Attendant",			"Attendant"			},
        { "Vicar",			"Vicar"				},
        { "Deacon",			"Deaconess"			},
        { "Priest",			"Priestess"			},	/* 10 */
        { "Minister",			"Lady Minister"			},
        { "Canon",			"Canon"				},
        { "Levite",			"Levite"			},
        { "Chaplain",			"Chaplain"			},
        { "Holy Physician",		"Holy Physician"		},	/* 15 */
        { "Apothecary",			"Apothecary"			}, 
        { "Caretaker",			"Caretaker"			},
        { "Bishop",			"Lady Bishop"			},
        { "Arch Bishop of the Church",	"Arch Lady of the Church"	},
        { "Apprentice Healer",		"Apprentice Healer"		},	/* 20 */
        { "Brother of the Blue Sash",	"Sister of the Blue Sash"	},     
        { "Brother of the Green Sash",	"Sister of the Green Sash"	},
        { "Brother of the Grey Sash",	"Sister of the Grey Sash"	},
        { "Brother of the White Sash",	"Sister of the White Sash"	},
        { "Blessed Man",		"Blessed Lady"			},	/* 25 */
        { "Enlightened",		"Enlightened"			},
        { "Sacred Man",			"Sacred Lady"			},
        { "Holy Man",			"Holy Lady"			},
        { "Divine Man",			"Divine Lady"			},
        { "Saint",			"Saint"				},	/* 30 */
        { "Baptist",			"Baptist"			},
        { "Healer",			"Healer"			},
        { "Healer of Blindness",	"Healer of Blindness"		},
        { "Healer of Poison",		"Healer of Poison"		},
        { "Healer of Disease",		"Healer of Disease"		},	/* 35 */
        { "Healer of Deafness",		"Healer of Deafness"		},
        { "Healer of Curses",		"Healer of Curses"		},
        { "Healer of Paralysis",	"Healer of Paralysis"		},
        { "Cleanser of Maladictions",	"Cleanser of Maladictions"	},
        { "Rejuvinator",		"Rejuvinator"			},	/* 40 */
        { "Priest of Life",		"Priestess of Life"		},
        { "Priest of Healing",		"Priestess of Healing"		},
        { "Living Touch",		"Living Touch"			},
        { "Giver of Life",		"Giver of Life"			},
        { "Hand of Faith",		"Hand of Faith"			},	/* 45 */
        { "Shepherd of the Flock",	"Shepherdess of the Flock"	},
        { "Defender of the Faithful",	"Defender of the Faithful"	},
        { "Pillar of Faith",		"Pillar of Faith"		},
        { "Holy Father",		"Holy Mother"			},
        { "Patriach of Healing",	"Matriach of Healing"		},	/* 50 */
        { "Holy Hero",			"Holy Heroine"			},
        { "Avatar of Healing",		"Avatar of Healing"		},
        { "Angel of Healing",		"Angel of Healing"		},
        { "Demigod of Healing",		"Demigoddess of Healing"	},
        { "Immortal of Healing",	"Immortal of Healing"		},
        { "God of Healing",		"Goddess of Healing"		},
        { "Deity of Healing",		"Deity of Healing"		},
        { "Supremity of Healing",	"Supremity of Healing"		},
        { "Creator",			"Creator"			},
        { "Implementor",		"Implementress"			}

	},


};


