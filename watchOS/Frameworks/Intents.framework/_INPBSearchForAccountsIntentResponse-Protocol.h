//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBFinancialAccountValue;

@protocol _INPBSearchForAccountsIntentResponse <NSObject>
+ (Class)accountsType;
@property(readonly, nonatomic) unsigned int accountsCount;
@property(copy, nonatomic) NSArray *accounts;
- (_INPBFinancialAccountValue *)accountsAtIndex:(unsigned int)arg1;
- (void)addAccounts:(_INPBFinancialAccountValue *)arg1;
- (void)clearAccounts;
@end

