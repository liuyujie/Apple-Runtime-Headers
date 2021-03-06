//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKDigitalFaceView.h>

#import "CSLSBacklightObserver.h"
#import "NTKSensitiveUIStateObserver.h"
#import "REElementActionDelegate.h"
#import "REUIElementIntentActionDelegate.h"
#import "REUIRelevanceEngineControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSOrderedSet, NSSet, NSString, NSTimer, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, NTKUpNextCollectionView, NTKUpNextCollectionViewFlowLayout, NTKUtilityComplicationFactory, REUIRelevanceEngineController, REUpNextScheduler, UIImage, UITapGestureRecognizer, UIView;

@interface NTKUpNextFaceView : NTKDigitalFaceView <REUIRelevanceEngineControllerDelegate, REElementActionDelegate, REUIElementIntentActionDelegate, NTKSensitiveUIStateObserver, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, CSLSBacklightObserver>
{
    NTKDigitalTimeLabel *_timeLabel;
    NTKDigitalTimeLabelStyle *_timeLabelDefaultStyle;
    NTKDigitalTimeLabelStyle *_timeLabelSmallInUpperRightCornerStyle;
    NTKUtilityComplicationFactory *_utilityComplicationFactory;
    NTKUpNextCollectionView *_contentView;
    NTKUpNextCollectionViewFlowLayout *_layout;
    REUIRelevanceEngineController *_engineController;
    UITapGestureRecognizer *_viewModeTapGesture;
    int _previousViewMode;
    NSTimer *_viewResetTimer;
    NSTimer *_positiveDwellForTopElementsTimer;
    NSTimer *_wakeWheelTimer;
    NSTimer *_wheelDelayTimer;
    NSTimer *_buttonPressTimer;
    float _lastCrownVelocity;
    float _accumulatedCrownDelta;
    NSArray *_complicationDisplays;
    _Bool _isAnimating;
    UIImage *_cellContentBackground;
    UIView *_timeLabelPlatter;
    UIView *_scalableView;
    _Bool _needsUpdatesWhileSuppressed;
    _Bool _isInflightScroll;
    _Bool _cancelInflightScroll;
    _Bool _isProgramaticScrollEvent;
    _Bool _crownInverted;
    _Bool _suppressUpdates;
    _Bool _suppressCrownEvents;
    _Bool _inBatchUpdate;
    _Bool _isBacklightOn;
    NSOrderedSet *_currentApplicationIdentifiers;
    REUpNextScheduler *_applicationIdentifierUpdateScheduler;
    NSSet *_dwellIndexPathes;
    int _interactiveState;
    CDUnknownBlockType _modeTransitionApplier;
    CDUnknownBlockType _modeTransitionCompletion;
    struct CGPoint _startOffsetForModeTransition;
    struct CGPoint _targetOffsetForModeTransition;
    struct CGPoint _secondaryOffsetForModeTransition;
    _Bool _scrollingStoppedTransition;
    int _previousDataMode;
    unsigned int _faceColor;
}

- (void).cxx_destruct;
- (void)_deviceOrientationInvertedDidChangeNotification:(id)arg1;
- (void)_updateCrownInvertedSetting;
- (void)_applyFraction:(float)arg1 fromFaceColor:(unsigned int)arg2 toFaceColor:(unsigned int)arg3 onCell:(id)arg4;
- (void)_cleanupAfterEditing;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (void)_setSiriBlurColor;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (unsigned int)_keylineLabelAlignmentForCustomEditMode:(int)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (id)intentActionWantsViewToBlurForAlert:(id)arg1;
- (id)intentActionWantsBackgroundImageForAlert:(id)arg1;
- (void)sensitiveUIStateChanged;
- (void)elementAction:(id)arg1 wantsToPerformTapActionForComplicationSlot:(id)arg2;
- (void)elementAction:(id)arg1 wantsViewControllerDisplayed:(id)arg2;
- (void)elementAction:(id)arg1 didFinishTask:(_Bool)arg2;
- (void)_switchViewModeForCurrentMode:(int)arg1 animated:(_Bool)arg2;
- (void)_handleViewModeTapGesture:(id)arg1;
- (void)_layoutTimeLabelForViewMode:(int)arg1;
- (void)_layoutTimeLabelPlatterViewMode:(int)arg1;
- (id)_timeLabelStyleForViewMode:(int)arg1;
- (void)_allowContentViewInteractive:(_Bool)arg1;
- (void)_cleanupAfterSettingViewMode:(int)arg1 scroll:(_Bool)arg2 targetOffset:(struct CGPoint)arg3 needsLayout:(_Bool)arg4;
- (void)_setViewMode:(int)arg1 scroll:(_Bool)arg2 scrollToPoint:(struct CGPoint)arg3 secondaryPoint:(struct CGPoint)arg4 force:(_Bool)arg5 velocity:(float)arg6 animated:(_Bool)arg7;
- (struct CGPoint)_defaultPointForDefaultMode;
- (_Bool)engineController:(id)arg1 isElementAtIndexPathVisible:(id)arg2;
- (void)engineController:(id)arg1 didMoveContent:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)engineController:(id)arg1 didInsertContent:(id)arg2 atIndexPath:(id)arg3;
- (void)engineController:(id)arg1 didRemoveContent:(id)arg2 atIndexPath:(id)arg3;
- (void)engineController:(id)arg1 didReloadContent:(id)arg2 atIndexPath:(id)arg3;
- (void)engineController:(id)arg1 performBatchUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_buttonPressTimerFired;
- (void)_wheelDelayTimerFired;
- (_Bool)_handlePhysicalButton:(unsigned int)arg1 event:(unsigned int)arg2;
- (_Bool)_wheelChangedWithEvent:(id)arg1;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)setViewMode:(int)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_becameInactiveFace;
- (void)_becameActiveFace;
- (void)_applyShowsLockedUI;
- (_Bool)_applyShowIdealizedContent;
- (_Bool)_applyShouldUseCanonicalContent;
- (void)_applyShowsCanonicalContent;
- (_Bool)_shouldUseCanonicalContent;
- (void)_updateDisabledDataSources;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_finalizeForSnapshotting:(CDUnknownBlockType)arg1;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (void)_handleOrdinaryScreenWake;
- (_Bool)presentedViewControllerShouldBecomeFirstResponder:(id)arg1;
- (void)_handleWristRaiseScreenWake;
- (void)_applyDataMode;
- (_Bool)_usesCustomZoom;
- (_Bool)_supportsTimeScrubbing;
- (_Bool)_wantsStatusBarHidden;
- (void)_loadLayoutRules;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_postPositiveDwellEventsForTopElements;
- (void)_stopPositiveDwellForTopElementsTimer;
- (void)_startPositiveDwellForTopElementsTimerIfNeeded;
- (void)_resetVisibilityForCells;
- (void)_updateVisibilityForCells;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)_dismissPresentedViewControllerIfNecessary:(_Bool)arg1;
- (void)_stopViewResetTimer;
- (void)_startViewResetTimer;
- (unsigned int)_distanceForIndexPathFromNow:(id)arg1;
- (void)_updateApplicationIdentifiersAndLocationAuthorization;
- (id)_sectionEnumerationOrder;
- (void)_availableDataSourcesDidChange;
- (void)_switchViewModeToDefault;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (_Bool)_needsForegroundContainerView;
- (float)_verticalPaddingForStatusBar;
- (void)_reloadContentIfNeeded;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (id)_detachedComplicationDisplays;
- (void)layoutSubviews;
- (void)_handleEngineChangeNotification;
- (void)_loadEngineController;
- (void)backlightDidChange:(id)arg1 from:(int)arg2 to:(int)arg3;
- (void)backlightDidTurnOff:(id)arg1 forReason:(unsigned int)arg2;
- (void)dealloc;
- (void)_showSiriUnavailableAlert:(id)arg1;
- (id)initWithFaceStyle:(int)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

