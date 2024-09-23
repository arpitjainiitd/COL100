#include <stdio.h>

int main(void) {
  // Write your code here
  int digit1_no1, digit2_no1, digit3_no1, digit4_no1, digit1_no2, digit2_no2,
      digit3_no2, digit4_no2;
  scanf("%d %d %d %d %d %d %d %d", &digit1_no1, &digit2_no1, &digit3_no1,
        &digit4_no1, &digit1_no2, &digit2_no2, &digit3_no2, &digit4_no2);
  // ADDITION
  int digit0_add, digit1_add, digit2_add, digit3_add, digit4_add, carry;
  // starting from the condition on 4th digit and going till the 1st digit
  // condition, for each case three cases will be formed
  // 4th (1)
  if (digit4_no1 + digit4_no2 == 0) {
    digit4_add = 0;
    // 3rd (1)
    if (digit3_no1 + digit3_no2 == 0) {
      digit3_add = 0;
      // 2nd (1)
      if (digit2_no1 + digit2_no2 == 0) {
        digit2_add = 0;
        // 1st (1)
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 0;
        } // 1st (2)
        else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 1;
        } // 1st (3)
        else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 0;
          digit0_add = 1;
        }
      } // 2nd (2)
      else if (digit2_no1 + digit2_no2 == 1) {
        digit2_add = 1;
        // 1st (1)
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 0;
        } // 1st (2)
        else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 1;
        } // 1st (3)
        else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 0;
          digit0_add = 1;
        }
      } // 2nd (3)
      else if (digit2_no1 + digit2_no2 == 2) {
        digit2_add = 0;
        carry = 1;
        // 1st (1)
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 1;
        } // 1st (2)
        else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 0;
          digit0_add = 1;
        } // 1st (3)
        else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 1;
          digit0_add = 1;
        }
      }
    } // 3rd (2),
      // similar comments will follow for the cases below as the parts are
      // repetitive for each digit case
    else if (digit3_no1 + digit3_no2 == 1) {
      digit3_add = 1;
      if (digit2_no1 + digit2_no2 == 0) {
        digit2_add = 0;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 0;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 0;
          digit0_add = 1;
        }
      } else if (digit2_no1 + digit2_no2 == 1) {
        digit2_add = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 0;
        } else if (digit1_no1 + digit2_no1 == 1) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 0;
          digit0_add = 1;
        }
      } else if (digit2_no1 + digit2_no2 == 2) {
        digit2_add = 0;
        carry = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 0;
          digit0_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 1;
          digit0_add = 1;
        }
      }
    } // 3rd (3)
    else if (digit3_no1 + digit3_no2 == 2) {
      digit3_add = 0;
      carry = 1;
      if (digit2_no1 + digit2_no2 == 0) {
        digit2_add = 1;
      } else if (digit2_no1 + digit2_no2 == 1) {
        digit2_add = 0;
        carry = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 0;
          digit0_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 1;
          digit0_add = 1;
        }
      } else if (digit2_no1 + digit2_no1 == 2) {
        digit2_add = 1;
        carry = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 0;
          digit0_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 1;
          digit0_add = 1;
        }
      }
    }
  }
  // 4th (2)
  else if (digit4_no1 + digit4_no2 == 1) {
    digit4_add = 1;
    if (digit3_no1 + digit3_no2 == 0) {
      digit3_add = 0;
      if (digit2_no1 + digit2_no2 == 0) {
        digit2_add = 0;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 0;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 0;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 0;
          digit0_add = 1;
        }
      } else if (digit2_no1 + digit2_no2 == 1) {
        digit2_add = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 0;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 0;
          digit0_add = 1;
        }
      } else if (digit2_no1 + digit2_no2 == 2) {
        digit2_add = 0;
        carry = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 0;
          digit0_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 1;
          digit1_add = 1;
        }
      }
    } else if (digit3_no1 + digit3_no2 == 1) {
      digit3_add = 1;
      if (digit2_no1 + digit2_no2 == 0) {
        digit2_add = 0;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 0;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 0;
          digit0_add = 1;
        }
      } else if (digit2_no1 + digit2_no2 == 1) {
        digit2_add = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 0;
        } else if (digit1_no1 + digit2_no1 == 1) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 0;
          digit0_add = 1;
        }
      } else if (digit2_no1 + digit2_no2 == 2) {
        digit2_add = 0;
        carry = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 0;
          digit0_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 1;
          digit0_add = 1;
        }
      }
    } else if (digit3_no1 + digit3_no2 == 2) {
      digit3_add = 0;
      carry = 1;
      if (digit2_no1 + digit2_no2 == 0) {
        digit2_add = 1;
      } else if (digit2_no1 + digit2_no2 == 1) {
        digit2_add = 0;
        carry = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 0;
          digit0_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 1;
          digit0_add = 1;
        }
      } else if (digit2_no1 + digit2_no1 == 2) {
        digit2_add = 1;
        carry = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 0;
          digit0_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 1;
          digit0_add = 1;
        }
      }
    }
  }

  // 4th (3)
  else if (digit4_no1 + digit4_no2 == 2) {
    digit4_add = 0;
    carry = 1;
    if (digit3_no1 + digit3_no2 == 0) {
      digit3_add = 1;
      if (digit2_no1 + digit2_no2 == 0) {
        digit2_add = 0;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 0;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 0;
          digit0_add = 1;
        }
      } else if (digit2_no1 + digit2_no2 == 1) {
        digit2_add = 1;
      } else if (digit2_no1 + digit2_no2 == 2) {
        digit2_add = 0;
        carry = 1;
      }
    } else if (digit3_no1 + digit3_no2 == 1) {
      digit3_add = 0;
      carry = 1;
      if (digit2_no1 + digit2_no2 == 0) {
        digit2_add = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 0;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 0;
          digit0_add = 1;
        }
      } else if (digit2_no1 + digit2_no2 == 1) {
        digit2_add = 0;
        carry = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 0;
          digit0_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 1;
          digit0_add = 1;
        }
      } else if (digit2_no1 + digit2_no2 == 2) {
        digit2_add = 1;
        carry = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 0;
          digit0_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 1;
          digit0_add = 1;
        }
      }
    } else if (digit3_no1 + digit3_no2 == 2) {
      digit3_add = 1;
      carry = 1;
      if (digit2_no1 + digit2_no2 == 0) {
        digit2_add = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 0;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 0;
          digit0_add = 1;
        }
      } else if (digit2_no1 + digit2_no2 == 1) {
        digit2_add = 0;
        carry = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 0;
          digit0_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 1;
          digit0_add = 1;
        }
      } else if (digit2_no1 + digit2_no2 == 2) {
        digit2_add = 1;
        carry = 1;
        if (digit1_no1 + digit1_no2 == 0) {
          digit1_add = 1;
        } else if (digit1_no1 + digit1_no2 == 1) {
          digit1_add = 0;
          digit0_add = 1;
        } else if (digit1_no1 + digit1_no2 == 2) {
          digit1_add = 1;
          digit0_add = 1;
        }
      }
    }
  }
  printf("%d%d%d%d%d\n", digit0_add, digit1_add, digit2_add, digit3_add,
         digit4_add);
  // // XOR
  int digit1_xor, digit2_xor, digit3_xor, digit4_xor;
  // if one digit is 1 and other is 0 then XOR will result 1, so the sum of the
  // two digits must be 1 for XOR to yield 1, in all other cases XOR gives 0
  if (digit1_no1 + digit1_no2 == 1) {
    digit1_xor = 1;
  } else {
    digit1_xor = 0;
  }
  if (digit2_no1 + digit2_no2 == 1) {
    digit2_xor = 1;
  } else {
    digit2_xor = 0;
  }
  if (digit3_no1 + digit3_no2 == 1) {
    digit3_xor = 1;
  } else {
    digit3_xor = 0;
  }
  if (digit4_no1 + digit4_no2 == 1) {
    digit4_xor = 1;
  } else {
    digit4_xor = 0;
  }
  printf("%d%d%d%d\n", digit1_xor, digit2_xor, digit3_xor, digit4_xor);
  // AND
  int digit1_and, digit2_and, digit3_and, digit4_and;
  // if sum of both digits is 2 then the only option is tht both of them are 1
  // thus AND will be 1, in all other cases AND will be 0
  if (digit1_no1 + digit1_no2 == 2) {
    digit1_and = 1;
  } else {
    digit1_and = 0;
  }
  if (digit2_no1 + digit2_no2 == 2) {
    digit2_and = 1;
  } else {
    digit2_and = 0;
  }
  if (digit3_no1 + digit3_no2 == 2) {
    digit3_and = 1;
  } else {
    digit3_and = 0;
  }
  if (digit4_no1 + digit4_no2 == 2) {
    digit4_and = 1;
  } else {
    digit4_and = 0;
  }
  printf("%d%d%d%d\n", digit1_and, digit2_and, digit3_and, digit4_and);
  // OR
  int digit1_or, digit2_or, digit3_or, digit4_or;
  // if sum of both digits is 0 then the only option is that both of them are 0
  // thus OR will also be 0, in all other cases OR will be 1
  if (digit1_no1 + digit1_no2 == 0) {
    digit1_or = 0;
  } else {
    digit1_or = 1;
  }
  if (digit2_no1 + digit2_no2 == 0) {
    digit2_or = 0;
  } else {
    digit2_or = 1;
  }
  if (digit3_no1 + digit3_no2 == 0) {
    digit3_or = 0;
  } else {
    digit3_or = 1;
  }
  if (digit4_no1 + digit4_no2 == 0) {
    digit4_or = 0;
  } else {
    digit4_or = 1;
  }
  printf("%d%d%d%d\n", digit1_or, digit2_or, digit3_or, digit4_or);
  return 0;
}
