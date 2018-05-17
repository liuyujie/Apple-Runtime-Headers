//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

@class EKEventAvailabilityEditItem, EKEventPrivacyLevelInlineEditItem;

@interface EKEventVisibilityEditItem : EKEventEditItem
{
    EKEventAvailabilityEditItem *_availabilityEditItem;
    EKEventPrivacyLevelInlineEditItem *_privacyLevelEditItem;
    EKEventEditItem *_subitemOfLastDetailViewControllerRequested;
    unsigned int _lastKnownNumberOfSubitems;
}

- (void).cxx_destruct;
- (id)_editItemForIndex:(unsigned int)arg1;
- (id)_lowestEditItem;
- (id)footerView;
- (id)footerTitle;
- (float)footerHeightForWidth:(float)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned int)arg1;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned int)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (unsigned int)numberOfSubitems;
- (void)setDelegate:(id)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (_Bool)forceTableReloadOnSave;
- (_Bool)requiresReconfigurationOnSave;
- (void)reset;
- (id)init;

@end
