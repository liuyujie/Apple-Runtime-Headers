//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICLegacyAccountUtilities : NSObject
{
}

+ (struct NoteAccountObject *)legacyAccountForLocalAccountWithContext:(struct NoteContext *)arg1;
+ (struct NoteAccountObject *)legacyAccountForPrimaryICloudAccountWithContext:(struct NoteContext *)arg1;
+ (struct NoteAccountObject *)accountForAccountIdentifier:(id)arg1 context:(struct NoteContext *)arg2;
+ (_Bool)isLegacyLocalAccount:(struct NoteAccountObject *)arg1;
+ (struct NoteAccountObject *)legacyAccountForLegacyAccountType:(long long)arg1 context:(struct NoteContext *)arg2;
+ (_Bool)didChooseToMigrateLegacyAccountType:(long long)arg1;
+ (_Bool)didChooseToMigrateAccount:(struct NoteAccountObject *)arg1 context:(struct NoteContext *)arg2;
+ (_Bool)didChooseToMigrateAccountsForContext:(struct NoteContext *)arg1 forAccountPassingTest:(CDUnknownBlockType)arg2;

@end
