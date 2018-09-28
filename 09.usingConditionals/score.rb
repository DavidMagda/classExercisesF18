print 'Enter your grade: '
score = gets.to_i

if score >= 90 and score <= 100
        print 'You have a A'
        elsif score >= 80 and score <=90 # grade must be B, C, D, or F
            print 'You have a B'
        elsif score >= 70 and score < 80 # grade must be C, D or F
            print 'You have a C'
        elsif score >= 60 and score < 70 # grade must D or F
            print 'You have a D'
        elsif score > 0 and score < 60 # grade must be F or Invalid
            print 'You have a F'
        else
            print 'You have provided A Invalid Value'
end