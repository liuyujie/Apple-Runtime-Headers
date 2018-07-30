//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewFocusDelegate_Legacy.h"
#import "UIViewControllerPreviewingDelegate.h"
#import "UIViewControllerPreviewingDelegate_Deprecated.h"
#import "_UIKeyboardAutoRespondingScrollViewController.h"

@class NSString, UIAutoRespondingScrollViewControllerKeyboardSupport, UICollectionView, UICollectionViewLayout, UILongPressGestureRecognizer, UIScrollView<_UIKeyboardAutoRespondingScrollView>;

@interface UICollectionViewController : UIViewController <_UIKeyboardAutoRespondingScrollViewController, UICollectionViewFocusDelegate_Legacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionViewLayout *_layout;
    UICollectionView *_collectionView;
    UILongPressGestureRecognizer *_reorderingGesture;
    UIAutoRespondingScrollViewControllerKeyboardSupport *_keyboardSupport;
    struct {
        unsigned int clearsSelectionOnViewWillAppear:1;
        unsigned int useLayoutToLayoutNavigationTransitions:1;
        unsigned int installsStandardReorderingGesture:1;
    } _collectionViewControllerFlags;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic, getter=_scrollView) UIScrollView<_UIKeyboardAutoRespondingScrollView> *scrollView;
- (void)_handleReorderingGesture:(id)arg1;
- (void)_installReorderingGestureIfNecessary;
@property(nonatomic) _Bool installsStandardGestureForInteractiveMovement;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)willPresentPreviewViewController:(id)arg1 forPosition:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)willPresentPreviewViewController:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)previewViewControllerForLocation:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (_Bool)_shouldRespondToPreviewingMethods;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)preferredFocusedView;
@property(nonatomic) _Bool useLayoutToLayoutNavigationTransitions;
- (void)_setUseLayoutToLayoutNavigationTransitions:(_Bool)arg1 withCheck:(_Bool)arg2;
- (_Bool)shouldCrossFadeBottomBars;
- (_Bool)shouldCrossFadeNavigationBar;
- (id)_animatorForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (id)_newCollectionViewWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)dataSource;
- (id)delegate;
@property(retain, nonatomic) UICollectionView *collectionView;
- (id)contentScrollView;
- (id)_uiCollectionView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)__viewDidAppear:(_Bool)arg1;
- (void)__viewWillAppear:(_Bool)arg1;
- (void)_updateCollectionViewLayoutAndDelegate:(id)arg1;
- (void)viewWillUnload;
- (void)_clearSharedView;
- (void)_setSharedCollectionView:(id)arg1;
- (void)setView:(id)arg1;
- (void)loadView;
- (id)_wrappingView;
@property(readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property(nonatomic) _Bool clearsSelectionOnViewWillAppear;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
