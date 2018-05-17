//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PepperUICore/PUICQuickboardListViewController.h>

@class NSArray;

@interface PUICQuickboardContactsViewController : PUICQuickboardListViewController
{
    NSArray *_recentContacts;
    unsigned int _contactFilter;
}

+ (id)addContactImage;
@property(nonatomic) unsigned int contactFilter; // @synthesize contactFilter=_contactFilter;
@property(retain, nonatomic) NSArray *recentContacts; // @synthesize recentContacts=_recentContacts;
- (void).cxx_destruct;
- (void)addContactButtonTapped:(id)arg1;
- (id)contentUnavailableMessage;
- (id)contentUnavailableTitle;
- (id)additionalTrayButtons;
- (void)didSelectListItem:(int)arg1;
- (id)cellForListItem:(int)arg1;
- (float)heightForListItem:(int)arg1 width:(float)arg2;
- (int)numberOfListItems;
- (id)initWithDelegate:(id)arg1;
- (id)newCell;

@end
