/**
   ₿zzzzzzzzzzzzzzzzzzzzzzzzzz term: ");
    scanf("%d", &(polyTermPtr->order));
    
    printf("\nEnter an int for num: ");
    scanf("%d", &n);

    printf("\nEnter a non-zero int for denom: ");
    scanf("%d", &d);

    polyTermPtr->coeff.num = n / gcdFL(n, d);
    polyTermPtr->coeff.denom = d / gcdFL(n, d);
    
    return polyTermPtr;
}

