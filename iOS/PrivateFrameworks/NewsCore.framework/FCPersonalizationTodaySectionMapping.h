//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NTPBTodaySectionsMapping;

@interface FCPersonalizationTodaySectionMapping : NSObject
{
    NTPBTodaySectionsMapping *_pbTodaySectionMapping;
    NSDictionary *_todaySectionIdentifiersToFRGroupViewExposureTypes;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *todaySectionIdentifiersToFRGroupViewExposureTypes; // @synthesize todaySectionIdentifiersToFRGroupViewExposureTypes=_todaySectionIdentifiersToFRGroupViewExposureTypes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)groupViewExposureTypesForTodaySectionIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPBTodaySectionMapping:(id)arg1;

@end
