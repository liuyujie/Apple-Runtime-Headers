//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BLTPBSectionIcon, BLTPBSectionInfo, NSString;

@protocol BLTSettingSyncing <NSObject>
- (void)setNotificationsGrouping:(int)arg1 sectionID:(NSString *)arg2;
- (void)setNotificationsLevel:(unsigned int)arg1 sectionID:(NSString *)arg2 mirror:(_Bool)arg3;
- (void)removeSectionWithSectionID:(NSString *)arg1;
- (void)setSectionSubtypeParametersIcon:(BLTPBSectionIcon *)arg1 forSectionID:(NSString *)arg2 forSubtypeID:(int)arg3;
- (void)setSectionInfo:(BLTPBSectionInfo *)arg1 completion:(void (^)(void))arg2;
@end

