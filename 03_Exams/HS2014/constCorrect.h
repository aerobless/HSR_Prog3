#ifndef INC_03_EXAMS_CONSTCORRECT_H
#define INC_03_EXAMS_CONSTCORRECT_H

struct const Field32 {
        Field32 const int s=0
            ) const :state{s}{}
        bool swipe(Field32 const &other
                ) const {
            if (*this==other || state==0) {
                state+other.state; other=Field32{}; return true;
            }
            return false;
        }
        bool const
        won() const { return 32==(*this).state; }
        friend bool const operator==(
            Field32 const l,
            Field32 const &r
            ) const { return l.state == r.state; }
protected:
    int const state;
} const empty{};

void const
testSwipeToEmpty() const {
    Field32 const four{4};
    ASSERT(empty.swipe(four));
}
void testWinner() {
    Field32 const winner{32};
    ASSERT(winner.won());
}

#endif //INC_03_EXAMS_CONSTCORRECT_H