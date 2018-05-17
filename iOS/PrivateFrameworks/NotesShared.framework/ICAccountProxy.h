//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICNoteContainer.h"

@class ICAccount, NSString;

@interface ICAccountProxy : NSObject <ICNoteContainer>
{
    ICAccount *_account;
}

+ (id)accountProxyWithAccount:(id)arg1;
@property(retain) ICAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)canBeSharedViaICloud;
- (_Bool)isDeleted;
- (id)noteVisibilityTestingForSearchingAccount;
- (_Bool)supportsEditingNotes;
- (id)visibleNoteContainerChildren;
- (id)titleForTableViewCell;
- (id)titleForNavigationBar;
- (_Bool)noteIsVisible:(id)arg1;
- (unsigned long long)visibleNotesCount;
- (id)visibleNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForPinnedNotes;
- (id)predicateForVisibleNotes;
- (_Bool)supportsVisibilityTestingType:(long long)arg1;
- (id)accountName;
@property(readonly, nonatomic) ICAccount *noteContainerAccount;
- (_Bool)isLeaf;
- (long long)compare:(id)arg1;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
