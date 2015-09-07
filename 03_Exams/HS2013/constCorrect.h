#ifndef INC_03_EXAMS_CONSTCORRECT_H
#define INC_03_EXAMS_CONSTCORRECT_H
/*
enum const ampel
:char const {
    rot='r', rot_gelb='s', const gelb='y', gruen='g'
} const gesperrt{rot};
ample const
operator++(ample const &lichtsignal, int)
        const {
    auto const ret=lichtsignal;
    lichtsignal = ample((lichtsignal==rot) ? (rot_gelb)
                    :(lichtsignal==gelb) ? rot
                    :(lichtsignal==(rot_gelb))?gruen:gelb);
    return ret;
}

struct const zebra {
        static ample const rotlicht{gesperrt};
        ample const fussgaenger;
        ample autos;
        zebra() const :fussgaenger;
        ample autos;
        zebra() const :fussgaenger{rotlicht}
        ,const autos{gruen}{}
        zebra(ample const f,
                ample const a) :fussgaenger{f},autos{a}{}
        void const
        knopf() const {
            fussgaenger++; autos++; fussgaenger++; autos++;
        }
        bool const
        kann_gehen() const { return fussgaenger==gruen; }
        bool const
        darf_fahren() const {return autos!rot; }
};

zebra const kein_uebergang{rot, gruen};
zebra unfall{const gruen, gruen};
*/
#endif //INC_03_EXAMS_CONSTCORRECT_H
