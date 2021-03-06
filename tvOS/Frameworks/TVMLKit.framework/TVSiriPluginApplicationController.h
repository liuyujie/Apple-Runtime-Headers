//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVMLKit/TVApplicationController.h>

#import "_TVAppDocumentControllerDelegate.h"

@class NSString, _TVAppDocumentController;

@interface TVSiriPluginApplicationController : TVApplicationController <_TVAppDocumentControllerDelegate>
{
    _Bool _partialModeEnabled;
    _Bool _trackingTransition;
    _TVAppDocumentController *_searchDC;
}

@property(readonly, nonatomic, getter=isPartialModeEnabled) _Bool partialModeEnabled; // @synthesize partialModeEnabled=_partialModeEnabled;
- (void).cxx_destruct;
- (void)_togglePartialModeWithProgress:(double)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_findSearchDocumentController;
- (id)mediaQueryEvaluatorForAppDocumentController:(id)arg1;
- (void)appNavigationController:(id)arg1 willLoadAppDocumentWithController:(id)arg2;
- (void)willEndInteractiveTransitionFromFullScreenFraction:(double)arg1 toFullScreenFraction:(double)arg2 velocity:(struct CGPoint)arg3;
- (void)didUpdateInteractiveTransitionWithFullScreenFraction:(double)arg1;
- (id)initWithContext:(id)arg1 window:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

