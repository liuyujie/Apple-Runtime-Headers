//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class HKDataMetadataDetailSection, NSDate, NSDictionary;

@protocol HKDataMetadataObject
@property(readonly, nonatomic) NSDictionary *metadata;
- (NSDate *)startDate;
- (void)addDetailValuesToSection:(HKDataMetadataDetailSection *)arg1;
@end
