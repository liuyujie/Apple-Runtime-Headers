//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICSharedPasswordUtilities : NSObject
{
    id _displayedSheet;
}

+ (id)createNoteFromNote:(id)arg1 isPasswordProtected:(BOOL)arg2 removingOriginalNote:(BOOL)arg3;
+ (void)transferSharedPasswordIfNecessary;
+ (void)resetAllSharedPasswords;
+ (void)updateAllNotesWithOldPassword:(id)arg1 toSharedPassword:(id)arg2 fromAccount:(id)arg3;
+ (void)resetTimeoutTimer;
+ (id)nonDeletedLockedNotesFromNotes:(id)arg1;
+ (BOOL)passwordCapabableAccountExists;
+ (id)defaultAccountForPasswordProtectedNotes;
+ (BOOL)setSharedPassword:(id)arg1 hint:(id)arg2 oldPassword:(id)arg3;
+ (BOOL)setSharedPassword:(id)arg1 hint:(id)arg2;
+ (BOOL)isDefaultAccountForPasswordNotesiCloudAccount;
+ (BOOL)isDefaultAccountForPasswordNotesLocalAccount;
+ (BOOL)isPassword:(id)arg1 correctForAccount:(id)arg2;
+ (BOOL)isPassword:(id)arg1 correctForNote:(id)arg2;
+ (BOOL)isSharedPasswordCorrect:(id)arg1;
+ (BOOL)authenticateWithPassword:(id)arg1 forNote:(id)arg2;
+ (BOOL)authenticateWithPassword:(id)arg1 forAccount:(id)arg2;
+ (BOOL)isAuthenticatedForDefaultAccount;
+ (BOOL)isAuthenticatedForNote:(id)arg1;
+ (BOOL)isAuthenticatedForAccount:(id)arg1;
+ (void)lockAllNotes;
+ (BOOL)unlockedNotesOrKeysExist;
+ (BOOL)sharedPasswordExists;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(struct NSWindow *)arg1;
+ (void)showFirstTimePasswordProtectNoteAlertIfNecessaryForDisplayWindow:(struct NSWindow *)arg1;
@property(retain, nonatomic) id displayedSheet; // @synthesize displayedSheet=_displayedSheet;
- (void).cxx_destruct;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(struct NSWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(struct NSWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(struct NSWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(struct NSWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateForDeletingNotes:(id)arg1 displayWindow:(struct NSWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(struct NSWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_recursivelyAuthenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct NSWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct NSWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct NSWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct NSWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cryptorCachedKeysDidEmpty:(id)arg1;
- (void)dealloc;
- (id)init;

@end

