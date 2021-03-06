//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "CSKStreamDelegate.h"
#import "CSKTableViewControllerDelegate.h"

@class CSKActivitiesViewController, CSKActivityDetailsViewController, CSKMessageDetailsViewController, CSKMessagesViewController, CSKStatusViewController, CSKStream, CSKStreamActivitiesObserver, CSKStreamMessagesObserver, CSKStreamSQLActivitiesObserver, CSKStreamSQLMessagesObserver, CSKStreamSource, CSKTableViewController, NSFont, NSSplitViewController, NSString;

@interface CSKStreamViewController : NSViewController <CSKStreamDelegate, CSKTableViewControllerDelegate>
{
    BOOL _showsActivities;
    BOOL _showsDetailsPane;
    BOOL _showsStatusView;
    BOOL _wantsNowMode;
    BOOL _pause;
    CSKStreamSource *_source;
    id <CSKStreamViewControllerDelegate> _delegate;
    unsigned long long _capacity;
    NSString *_activitiesColumnLayoutAutosaveName;
    NSString *_messagesColumnLayoutAutosaveName;
    NSFont *_defaultFont;
    CSKStream *_stream;
    CSKStreamSQLMessagesObserver *_messagesSQLObserver;
    CSKStreamMessagesObserver *_messagesObserver;
    CSKMessagesViewController *_messagesViewController;
    CSKMessageDetailsViewController *_messageDetailsViewController;
    CSKStreamActivitiesObserver *_activitiesObserver;
    CSKStreamSQLActivitiesObserver *_activitiesSQLObserver;
    CSKActivitiesViewController *_activitiesViewController;
    CSKActivityDetailsViewController *_activityDetailsViewController;
    CSKStatusViewController *_statusViewController;
    NSSplitViewController *_splitViewController;
    NSViewController *_currentDetailsViewControllerProxy;
    CSKTableViewController *_currentViewControllerProxy;
    unsigned long long _currentDisplayedItemsCount;
}

@property(nonatomic) unsigned long long currentDisplayedItemsCount; // @synthesize currentDisplayedItemsCount=_currentDisplayedItemsCount;
@property(nonatomic) __weak CSKTableViewController *currentViewControllerProxy; // @synthesize currentViewControllerProxy=_currentViewControllerProxy;
@property(nonatomic) __weak NSViewController *currentDetailsViewControllerProxy; // @synthesize currentDetailsViewControllerProxy=_currentDetailsViewControllerProxy;
@property(readonly, nonatomic) NSSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(readonly, nonatomic) CSKStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(readonly, nonatomic) CSKActivityDetailsViewController *activityDetailsViewController; // @synthesize activityDetailsViewController=_activityDetailsViewController;
@property(readonly, nonatomic) CSKActivitiesViewController *activitiesViewController; // @synthesize activitiesViewController=_activitiesViewController;
@property(readonly, nonatomic) CSKStreamSQLActivitiesObserver *activitiesSQLObserver; // @synthesize activitiesSQLObserver=_activitiesSQLObserver;
@property(readonly, nonatomic) CSKStreamActivitiesObserver *activitiesObserver; // @synthesize activitiesObserver=_activitiesObserver;
@property(nonatomic) BOOL pause; // @synthesize pause=_pause;
@property(readonly, nonatomic) CSKMessageDetailsViewController *messageDetailsViewController; // @synthesize messageDetailsViewController=_messageDetailsViewController;
@property(readonly, nonatomic) CSKMessagesViewController *messagesViewController; // @synthesize messagesViewController=_messagesViewController;
@property(readonly, nonatomic) CSKStreamMessagesObserver *messagesObserver; // @synthesize messagesObserver=_messagesObserver;
@property(readonly, nonatomic) CSKStreamSQLMessagesObserver *messagesSQLObserver; // @synthesize messagesSQLObserver=_messagesSQLObserver;
@property(readonly, nonatomic) CSKStream *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) NSFont *defaultFont; // @synthesize defaultFont=_defaultFont;
@property(retain, nonatomic) NSString *messagesColumnLayoutAutosaveName; // @synthesize messagesColumnLayoutAutosaveName=_messagesColumnLayoutAutosaveName;
@property(retain, nonatomic) NSString *activitiesColumnLayoutAutosaveName; // @synthesize activitiesColumnLayoutAutosaveName=_activitiesColumnLayoutAutosaveName;
@property(nonatomic) BOOL wantsNowMode; // @synthesize wantsNowMode=_wantsNowMode;
@property(nonatomic) BOOL showsStatusView; // @synthesize showsStatusView=_showsStatusView;
@property(nonatomic) BOOL showsDetailsPane; // @synthesize showsDetailsPane=_showsDetailsPane;
@property(nonatomic) BOOL showsActivities; // @synthesize showsActivities=_showsActivities;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(nonatomic) __weak id <CSKStreamViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CSKStreamSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (CDUnknownBlockType)_activitiesObserverRemovalCompletion;
- (CDUnknownBlockType)_activitiesObserverAdditionCompletion;
- (CDUnknownBlockType)_activitiesObserverResetCompletion;
- (CDUnknownBlockType)_activitiesSQLObserverSearchCompletion;
- (CDUnknownBlockType)_activitiesSQLObserverRemovalCompletion;
- (CDUnknownBlockType)_activitiesSQLObserverAdditionCompletion;
- (CDUnknownBlockType)_activitiesSQLObserverResetCompletion;
- (CDUnknownBlockType)_sqlMessagesObserverSortCompletion;
- (CDUnknownBlockType)_sqlMessagesObserverSearchCompletion;
- (CDUnknownBlockType)_sqlMessagesObserverRemovalCompletion;
- (CDUnknownBlockType)_sqlMessagesObserverAdditionCompletion;
- (CDUnknownBlockType)_sqlMessagesObserverResetCompletion;
- (CDUnknownBlockType)_messagesObserverRemovalCompletion;
- (CDUnknownBlockType)_messagesObserverAdditionCompletion;
- (CDUnknownBlockType)_messagesObserverResetCompletion;
- (void)tableViewControllerScrollingPositionDidReachTop:(id)arg1;
- (void)tableViewController:(id)arg1 needSortingUsingSortDescriptor:(id)arg2;
- (id)tableViewController:(id)arg1 menuItemsForRow:(unsigned long long)arg2 columnIdentifier:(id)arg3;
- (void)tableViewController:(id)arg1 lockFocusStateDidChange:(BOOL)arg2;
- (void)tableViewController:(id)arg1 entityAtRowDidDoubleClick:(long long)arg2;
- (void)tableViewController:(id)arg1 entitiesDidSelect:(id)arg2;
- (void)stream:(id)arg1 sourceDidFinishAnalyzing:(id)arg2;
- (void)stream:(id)arg1 sourceDidStartAnalyzing:(id)arg2;
- (id)stream:(id)arg1 anchorEntityForObserver:(id)arg2 selected:(char *)arg3;
- (void)stream:(id)arg1 sourceStreamingDidFinish:(id)arg2 total:(unsigned long long)arg3 failures:(unsigned long long)arg4;
- (void)stream:(id)arg1 sourceStreamingDidStart:(id)arg2;
- (void)stream:(id)arg1 sourceStreamingDidFail:(id)arg2;
- (void)_updateDisplayedTextFontSize:(unsigned long long)arg1;
- (void)_updateDisplayedCountAndNotifyDelegateWithItems:(unsigned long long)arg1;
- (void)_updateWantsNowModeState:(BOOL)arg1;
- (void)makeTextFontSizeSmaller;
- (void)makeTextFontSizeBigger;
- (void)makeTextFontStandardSize;
- (BOOL)canMakeTextFontSizeSmaller;
- (BOOL)canMakeTextFontSizeBigger;
- (void)invalidateColumnLayout;
- (id)currentColumnLayout;
- (void)updateActivitiesColumnLayoutWithoutInvalidateAndSave:(id)arg1;
- (void)updateMessagesColumnLayoutWithoutInvalidateAndSave:(id)arg1;
- (void)applyColumnLayout:(id)arg1;
- (void)removeTrailingViewFromStatusView;
- (void)addTrailingViewToStatusView:(id)arg1;
- (void)collapseSelectedEntities;
- (void)expandSelectedEntities;
- (id)joinedPasteboardDescriptionsForSelectedEntities;
- (id)selectedEntities;
- (unsigned long long)displayedItemsCount;
- (id)currentFilters;
- (void)applyFilters:(id)arg1;
- (id)loadItemLocalizedTitleForIdentifier:(id)arg1;
- (id)currentLoadItemInfo;
- (void)updateLogItemInfo:(id)arg1;
- (void)fillTableLogsMenu:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)resumeStreaming;
- (void)pauseStreaming;
- (void)reload;
- (void)loadMore;
- (id)loadRangeValue;
- (id)loadRangeValueItems;
- (void)clear;
- (long long)_viewControllerIndexInSplitView:(id)arg1;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_configureDetailsViewController:(id)arg1;
- (void)_showStatusView:(BOOL)arg1;
- (void)_showDetailsPane:(BOOL)arg1;
- (void)_showActivitiesLayout:(BOOL)arg1;
- (void)performFindPanelAction:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithStreamSource:(id)arg1 capacity:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

