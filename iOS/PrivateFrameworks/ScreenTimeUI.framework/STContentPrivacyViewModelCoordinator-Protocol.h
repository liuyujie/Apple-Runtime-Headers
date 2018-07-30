//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, STContentPrivacyViewModel, STRestrictionItem;

@protocol STContentPrivacyViewModelCoordinator <NSObject>
@property(readonly, nonatomic) STContentPrivacyViewModel *viewModel;
- (void)saveRestrictionValue:(id)arg1 forItem:(STRestrictionItem *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)saveValuesForRestrictions:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)saveContentPrivacyEnabled:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
@end
