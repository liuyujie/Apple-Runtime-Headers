//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol PTDomainClient <NSObject>
- (void)sendActiveTestRecipeEvent:(int)arg1;
- (void)invokeOutletAtKeyPath:(NSString *)arg1;
- (void)setArchiveValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (void)restoreDefaultSettings;
- (void)updateSettingsFromArchive:(NSDictionary *)arg1;
@end

