//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "UIActivityItemSource.h"

@class NSString;

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource>
{
    id _placeholderItem;
    NSString *_activityType;
    id _providedItem;
}

@property(retain, nonatomic) id providedItem; // @synthesize providedItem=_providedItem;
@property(copy, nonatomic, setter=_setActivityType:) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) id placeholderItem; // @synthesize placeholderItem=_placeholderItem;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (_Bool)_shouldExecuteItemOperationForActivity:(id)arg1;
- (void)main;
@property(readonly, nonatomic) id item;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
