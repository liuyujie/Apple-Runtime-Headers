//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIFocusRegionContainer.h"

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionContainerProxy : NSObject <_UIFocusRegionContainer>
{
    _Bool _isFocusEnvironment;
    id <UIFocusItemContainer> _itemContainer;
}

@property(nonatomic) _Bool isFocusEnvironment; // @synthesize isFocusEnvironment=_isFocusEnvironment;
@property(retain, nonatomic) id <UIFocusItemContainer> itemContainer; // @synthesize itemContainer=_itemContainer;
- (void).cxx_destruct;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (id)_preferredFocusRegionCoordinateSpace;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (id)_focusEnvironment;
- (id)initWithItemContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(readonly) unsigned int hash;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) int preferredFocusMovementStyle;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

