//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKUIScrollingSegmentedController.h"

#import "MusicClientContextConsuming.h"
#import "MusicJSNativeViewControllerFactory.h"
#import "MusicJSSearchNativeViewControllerDelegate.h"
#import "MusicLibrarySearchResultsViewControllerDelegate.h"
#import "MusicSearchBarDelegate.h"
#import "MusicSearchHintsViewControllerDelegate.h"
#import "MusicSearchRecentsViewControllerDelegate.h"
#import "SKUIScrollingSegmentedControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class MusicClientContext, MusicLibrarySearchResultsViewController, MusicSearchBar, MusicSearchHintsViewController, NSArray, NSString, SKUIClientContext, UISearchBar, UIViewController, _UINavigationControllerPalette;

@interface MusicSearchViewController : SKUIScrollingSegmentedController <MusicJSNativeViewControllerFactory, MusicJSSearchNativeViewControllerDelegate, MusicLibrarySearchResultsViewControllerDelegate, MusicSearchBarDelegate, MusicSearchHintsViewControllerDelegate, MusicSearchRecentsViewControllerDelegate, SKUIScrollingSegmentedControllerDelegate, MusicClientContextConsuming, UIViewControllerTransitioningDelegate>
{
    _Bool _allowsAllContentInStoreSearch;
    _Bool _allowsRadioContentInStoreSearch;
    _Bool _didInsertStoreSearchResultsDocument;
    _Bool _didMakeSearchBarFirstResponder;
    MusicLibrarySearchResultsViewController *_librarySearchResultsViewController;
    _UINavigationControllerPalette *_palette;
    MusicSearchBar *_searchBar;
    MusicSearchHintsViewController *_searchHintsViewController;
    UIViewController *_storeSearchResultsViewController;
    NSString *_partialSearchString;
    _Bool _storeSearchViewNeedsChangeUponAppearance;
    _Bool _storeSearchViewNeedsSubmitUponAppearance;
    NSArray *_titleViewPaletteConstraints;
    _Bool _mediaPickerAllowsLocalSearchOnly;
    _Bool _mediaPickerAllowsMultipleSelection;
    _Bool _mediaPickerPicksSingleCollection;
    _Bool _mediaPickerIncludePlaylists;
    _Bool _mediaPickerOmitsGeniusPlaylists;
    _Bool _shouldUseMediaPickerViewConfiguration;
    _Bool _storeSearchViewIsVisible;
    MusicClientContext *_clientContext;
    id <MusicSearchViewControllerMediaPickerDelegate> _mediaPickerDelegate;
    unsigned long long _searchOptions;
}

+ (id)_defaultSearchViewControllerForPresentingViewController:(id)arg1;
+ (id)_defaultSearchNavigationControllerWithSearchViewController:(id)arg1;
+ (id)searchViewControllerForPresentingViewController:(id)arg1 withSearchBar:(id)arg2;
+ (id)mediaPickerSearchViewControllerWithSearchBar:(id)arg1 allowLocalSearchOnly:(_Bool)arg2 allowMultipleSelection:(_Bool)arg3 picksSingleCollection:(_Bool)arg4 includePlaylists:(_Bool)arg5 omitGeniusPlaylists:(_Bool)arg6 presentingViewController:(id)arg7;
+ (id)defaultSearchBarWithTraitCollection:(id)arg1;
@property(nonatomic) _Bool storeSearchViewIsVisible; // @synthesize storeSearchViewIsVisible=_storeSearchViewIsVisible;
@property(nonatomic) unsigned long long searchOptions; // @synthesize searchOptions=_searchOptions;
@property(nonatomic) __weak id <MusicSearchViewControllerMediaPickerDelegate> mediaPickerDelegate; // @synthesize mediaPickerDelegate=_mediaPickerDelegate;
@property(retain, nonatomic) SKUIClientContext *clientContext;
- (void).cxx_destruct;
- (void)_updateForStoreContentAvailabilityChange;
- (id)_storeSearchSegmentTitle;
- (void)_recordSearchRecent:(id)arg1;
- (id)_extraInfoForStoreSearchEvent;
- (void)_handleCancelButtonPressed;
- (void)_dispatchSearchTextChangeWithTerm:(id)arg1 usingSubmitEventType:(_Bool)arg2;
- (void)_detachPalette;
- (void)_configureNavigationBar;
- (void)_attachPaletteIfNecessary;
- (void)_removeConstraints;
- (void)_applyConstraints;
- (_Bool)_allowsLocalSearchOnly;
- (void)_handleCanShowRadioDidChangeNotification:(id)arg1;
- (void)_handleCanShowSubscriptionContentDidChangeNotification:(id)arg1;
@property(copy, nonatomic) NSString *searchTerm;
@property(readonly, nonatomic) double searchNavigationBarPaletteHeight;
@property(readonly, nonatomic) UISearchBar *searchBar;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)searchBarDidLayoutSubviews:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarBookmarkButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(id)arg1 didEndDisplayingViewControllerAtIndex:(unsigned long long)arg2;
- (void)searchRecentsViewController:(id)arg1 didSelectSearchTerm:(id)arg2;
- (void)searchHintsViewController:(id)arg1 didSelectSearchHintWithText:(id)arg2 URL:(id)arg3 index:(long long)arg4;
- (void)librarySearchResultsViewController:(id)arg1 didSelectResultWithTitle:(id)arg2;
- (void)jsSearchNativeViewController:(id)arg1 setSearchTerm:(id)arg2;
- (void)jsSearchNativeViewController:(id)arg1 setStoreSearchResultsDocument:(id)arg2 options:(id)arg3;
- (void)jsSearchNativeViewController:(id)arg1 selectMediaPickerItem:(id)arg2;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initForMediaPickerUseAllowLocalSearchOnly:(_Bool)arg1 allowMultipleSelection:(_Bool)arg2 pickSingleCollection:(_Bool)arg3 includePlaylists:(_Bool)arg4 omitGeniusPlaylists:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
