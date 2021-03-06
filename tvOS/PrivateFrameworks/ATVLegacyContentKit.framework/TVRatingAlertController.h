//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertController.h"

#import "UIGestureRecognizerDelegate.h"
#import "_TVRatingViewControllerDelegate.h"

@class NSString, UIColor, _TVRatingViewController;

@interface TVRatingAlertController : UIAlertController <_TVRatingViewControllerDelegate, UIGestureRecognizerDelegate>
{
    _TVRatingViewController *_ratingViewController;
    CDUnknownBlockType _ratingSelectionHandler;
}

+ (id)ratingAlertControllerWithTitle:(id)arg1 initialRating:(unsigned long long)arg2 initialRatingIsSuggestion:(_Bool)arg3;
@property(copy, nonatomic) CDUnknownBlockType ratingSelectionHandler; // @synthesize ratingSelectionHandler=_ratingSelectionHandler;
- (void).cxx_destruct;
- (void)_ratingViewController:(id)arg1 didSelectRating:(unsigned long long)arg2;
@property(nonatomic) _Bool initialRatingIsSuggestion;
@property(nonatomic) unsigned long long initialRating;
@property(retain, nonatomic) UIColor *starSuggestionFillColor;
@property(retain, nonatomic) UIColor *starFillColor;
@property(retain, nonatomic) UIColor *starOutlineColor;
- (id)preferredFocusEnvironments;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

