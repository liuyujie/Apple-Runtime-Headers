//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactCardWidgetProviderDelegate.h"

@class CNUIUserActionListDataSource, NSString;

@interface CNContactCardViewControllerWidgetProviderDelegate : NSObject <CNContactCardWidgetProviderDelegate>
{
    CNUIUserActionListDataSource *_userActionListDataSource;
    id <CNSchedulerProvider> _schedulerProvider;
}

@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) CNUIUserActionListDataSource *userActionListDataSource; // @synthesize userActionListDataSource=_userActionListDataSource;
- (void).cxx_destruct;
- (void)widgetProvider:(id)arg1 willCreateActionsViewController:(id)arg2;
- (id)initWithActionListDataSource:(id)arg1 schedulerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
