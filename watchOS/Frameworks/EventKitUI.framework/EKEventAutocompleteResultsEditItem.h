//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItem.h>

@class NSArray;

@interface EKEventAutocompleteResultsEditItem : EKCalendarItemEditItem
{
    _Bool _suggestionApplied;
    NSArray *_results;
}

+ (id)_backgroundColor;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasSuggestedLocationResult;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (_Bool)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned int)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned int)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfSubitems;

// Remaining properties
@property(nonatomic) __weak id <EKEventAutocompleteResultsEditItemDelegate> delegate; // @dynamic delegate;

@end

