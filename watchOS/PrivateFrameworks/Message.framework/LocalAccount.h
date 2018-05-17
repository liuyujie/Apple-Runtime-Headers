//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/MailAccount.h>

@interface LocalAccount : MailAccount
{
}

+ (id)csAccountTypeString;
+ (id)accountTypeString;
+ (id)legacyPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)localAccount;
+ (id)accountTypeIdentifier;
- (_Bool)supportsArchiving;
- (_Bool)supportsAppend;
- (_Bool)deleteInPlaceForMailbox:(id)arg1;
- (id)_infoForMatchingURL:(id)arg1;
- (id)_URLScheme;
- (id)transientDraftsFolder;
- (id)transientDraftsFolderShouldCreate:(_Bool)arg1;
- (void)resetSpecialMailboxes;
- (id)mailboxUidForRelativePath:(id)arg1 create:(_Bool)arg2 withOption:(int)arg3;
- (id)mailboxUidForFileSystemPath:(id)arg1;
- (_Bool)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (_Bool)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (_Bool)supportsPurge;
- (_Bool)canGoOffline;
- (_Bool)_shouldConfigureMailboxCache;
- (_Bool)canFetch;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setHostname:(id)arg1;
- (id)displayName;
- (id)pushedMailboxUids;
- (id)primaryMailboxUid;
- (id)mailboxPathExtension;
- (Class)storeClass;
- (id)uniqueId;
- (_Bool)isActive;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (id)legacySQLExpressionToMatchAllMailboxes;

@end
