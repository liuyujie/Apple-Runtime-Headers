//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMCore/IMAccountController.h>

@class NSMutableDictionary;

@interface IMSimulatedAccountController : IMAccountController
{
    NSMutableDictionary *_simulatedAccountsPerService;
}

- (void).cxx_destruct;
- (id)init;
- (id)activeSMSAccount;
- (id)activeIMessageAccount;
- (id)activeAccounts;
- (void)setSimulatedAccounts:(id)arg1 forServiceNamed:(id)arg2;

@end
