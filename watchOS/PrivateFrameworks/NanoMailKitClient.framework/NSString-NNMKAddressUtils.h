//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (NNMKAddressUtils)
+ (id)mf_partialSurnames;
+ (id)mf_nameExtensions;
- (id)mf_addressComment;
- (id)mf_uncommentedAddress;
- (id)copyUncommentedAddress;
- (id)mf_trimCommasSpacesQuotes;
- (_Bool)mf_appearsToBeAnInitial;
- (void)mf_firstName:(id *)arg1 middleName:(id *)arg2 lastName:(id *)arg3 extension:(id *)arg4;
- (void *)person;
- (id)addressComment;
- (id)emailAddress;
- (id)preferredCompositeName;
- (id)preferredAbbreviatedName;
@end

