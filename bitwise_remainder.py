def bit_div(a,b):

    ans = 0 # the quotient is intialized

    neg = a < 0 or b < 0 # Checking if one of the numbers is negative

    a = abs(a) # making sure both the numbers are positive
    b = abs(b) 

    for i in range(31,-1,-1): # starting our loop

        if b << i <= a  : # checking if b multiplied by 2**i is <= a 
            a -= b << i   # subtracting b << i from a
            ans += 1 << i # adding 2 power i to the answer

    
    #(return ans if neg == 0 else -1 * ans) # finally checking if the output should be negative and returning it after turning it into positive. If positive returning the same value.
    return a & ~((~int(0)) << b) # returning the remainder after division
    
#main
print(bit_div(35,3))
    
