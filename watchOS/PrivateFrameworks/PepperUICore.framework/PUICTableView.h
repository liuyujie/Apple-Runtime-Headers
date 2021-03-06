//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "PUICCrownInputSequencerDataSource.h"
#import "PUICCrownInputSequencerDelegate.h"
#import "PUICSectionable.h"
#import "PUICTableViewCellActionBarDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UIScrollViewScrollObserver.h"

@class NSIndexPath, NSString, PUICSelectionIndexController, PUICTableViewCellActionBar, UIPanGestureRecognizer, UIScrollView;

@interface PUICTableView : UITableView <PUICCrownInputSequencerDelegate, PUICCrownInputSequencerDataSource, UIGestureRecognizerDelegate, PUICSectionable, _UIScrollViewScrollObserver, PUICTableViewCellActionBarDelegate>
{
    UIPanGestureRecognizer *_swipeActionPanRecognizer;
    float _initialTranslation;
    PUICTableViewCellActionBar *_actionBar;
    _Bool _swipingLeft;
    UIScrollView *_observedScrollView;
    float _flattenExtremesProgress;
    struct {
        unsigned int dataSourceSectionIndexTitlesForTableView:1;
        unsigned int dataSourceTableViewSectionForSectionIndexTitleAtIndex:1;
        unsigned int dataSourceCanEditRow:1;
        unsigned int delegateDeleteConfirmationButton:1;
        unsigned int delegateSwipeAccessoryButton:1;
        unsigned int delegateSwipeControlMask:1;
        unsigned int delegateTitleForDeleteButton:1;
        unsigned int delegateTitleForAccessoryButton:1;
        unsigned int delegateWillPerformAction:1;
        unsigned int delegateDidPerformAction:1;
        unsigned int delegateEditActionsForRow:1;
        unsigned int delegateTrailingSwipeActions:1;
        unsigned int delegateLeadingSwipeActions:1;
        unsigned int madeSwipedCellViewsTransparent:1;
    } _puicFlags;
    PUICSelectionIndexController *_indexController;
    _Bool _reducedMotion;
    _Bool _showsSectionIndexOverlayOnCrownScroll;
    _Bool _forceEllipticCurveTableViewEverywhere;
    _Bool _forceCurvesTop;
    _Bool _forceCurvesBottom;
    _Bool _flattenExtremesTop;
    _Bool _flattenExtremesBottom;
    NSIndexPath *_swipedIndexPath;
    float _threshold;
    float _scaleExponent;
    float _scaleAccentuate;
    float _alphaExponent;
    float _alphaAccentuate;
}

@property(nonatomic) float alphaAccentuate; // @synthesize alphaAccentuate=_alphaAccentuate;
@property(nonatomic) float alphaExponent; // @synthesize alphaExponent=_alphaExponent;
@property(nonatomic) float scaleAccentuate; // @synthesize scaleAccentuate=_scaleAccentuate;
@property(nonatomic) float scaleExponent; // @synthesize scaleExponent=_scaleExponent;
@property(nonatomic) float threshold; // @synthesize threshold=_threshold;
@property(nonatomic) _Bool flattenExtremesBottom; // @synthesize flattenExtremesBottom=_flattenExtremesBottom;
@property(nonatomic) _Bool flattenExtremesTop; // @synthesize flattenExtremesTop=_flattenExtremesTop;
@property(nonatomic) _Bool forceCurvesBottom; // @synthesize forceCurvesBottom=_forceCurvesBottom;
@property(nonatomic) _Bool forceCurvesTop; // @synthesize forceCurvesTop=_forceCurvesTop;
@property(nonatomic) _Bool forceEllipticCurveTableViewEverywhere; // @synthesize forceEllipticCurveTableViewEverywhere=_forceEllipticCurveTableViewEverywhere;
@property(nonatomic) _Bool showsSectionIndexOverlayOnCrownScroll; // @synthesize showsSectionIndexOverlayOnCrownScroll=_showsSectionIndexOverlayOnCrownScroll;
@property(retain, nonatomic) NSIndexPath *swipedIndexPath; // @synthesize swipedIndexPath=_swipedIndexPath;
- (void).cxx_destruct;
- (void)_disableDefaultUITableViewIndexBar;
- (id)_swipeAccessoryButtonForRowAtIndexPath:(id)arg1;
- (id)_titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg1;
- (id)_deleteConfirmationButtonForRowAtIndexPath:(id)arg1;
- (id)_titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
- (int)_numberOfRows;
- (void)_puic_contentOffsetDidChange;
- (void)_wheelChangedWithEvent:(id)arg1;
- (float)openThresholdForActionBar:(id)arg1;
- (unsigned int)nextStateForActionBar:(id)arg1;
- (void)actionBar:(id)arg1 tappedButtonForAction:(id)arg2;
- (id)leadingEdgeActionsForActionBar:(id)arg1;
- (id)trailingEdgeActionsForActionBar:(id)arg1;
- (id)_convertUISwipeActionsToRowActions:(id)arg1 forActionBar:(id)arg2;
- (id)actionsForActionBar:(id)arg1;
- (void)resetSwipedRowAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setSwipedIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)_performDestructiveAction:(id)arg1 atIndexPath:(id)arg2;
- (void)_performNonDestructiveAction:(id)arg1 atIndexPath:(id)arg2;
- (void)deleteRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)_swipedCell;
- (void)_moveCell:(id)arg1 toSwipeOffset:(float)arg2 animated:(_Bool)arg3 actionButtonsHidden:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(_Bool)arg2;
- (float)_rubberBandOffsetForOffset:(float)arg1 usingActionBar:(id)arg2;
- (void)_swipeRecognizerChanged:(id)arg1;
- (void)_swipeRecognizerBegan:(id)arg1;
- (void)swipeRecognizerDidRecognize:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_hasLeadingEdgeSwipeActionsForIndexPath:(id)arg1;
- (_Bool)_canSwipeToEditRowAtIndexPath:(id)arg1;
- (void)setCellSwipeEnabled:(_Bool)arg1;
- (_Bool)cellSwipeEnabled;
- (struct CGRect)rectForFirstItemInSection:(int)arg1;
- (int)sectionForSectionItem:(id)arg1 atItemIndex:(int)arg2;
- (id)sectionIndexItems;
- (int)numberOfItemsInSection:(int)arg1;
- (int)sectionForPoint:(struct CGPoint)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)deleteConfirmationIndexPath;
- (_Bool)allowsSelection;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_createPreparedCellForGlobalRow:(int)arg1 withIndexPath:(id)arg2 willDisplay:(_Bool)arg3;
- (_Bool)_shouldDisplayExtraSeparatorsAtOffset:(float *)arg1;
@property(nonatomic) __weak id <PUICTableViewDelegate> delegate; // @dynamic delegate;
@property(nonatomic) __weak id <PUICTableViewDataSource> dataSource; // @dynamic dataSource;
- (void)_applyEllipticCurveToCells;
- (_Bool)_shouldCurve;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)didMoveToWindow;
- (float)bottomThreshold;
- (float)topThreshold;
- (float)visibleHeight;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)_performTableAlteringOperation:(CDUnknownBlockType)arg1;
- (void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)moveSection:(int)arg1 toSection:(int)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(int)arg2;
- (void)reloadSections:(id)arg1 withRowAnimation:(int)arg2;
- (void)insertSections:(id)arg1 withRowAnimation:(int)arg2;
- (void)endUpdates;
- (void)beginUpdates;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadSectionIndexTitles;
- (void)reloadData;
- (int)sectionIndexMinimumDisplayRowCount;
- (void)setSectionIndexMinimumDisplayRowCount:(int)arg1;
- (void)_handleReducedMotionStatusDidChangedNotification:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

