//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray;

@interface DDScannerResult : NSObject <NSSecureCoding>
{
    // Error parsing type: ^{__DDResult={__CFRuntimeBase=IAI}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=ii}i^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}iCf}, name: _coreResult
    NSArray *_subResultsCache;
}

+ (_Bool)supportsSecureCoding;
+ (id)resultsFromCoreResults:(struct __CFArray *)arg1;
+     // Error parsing type: @12@0:4^{__DDResult={__CFRuntimeBase=IAI}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=ii}i^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}iCf}8, name: resultFromCoreResult:
- (void)offsetRangeBy:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)getStreet:(id *)arg1 city:(id *)arg2 state:(id *)arg3 zip:(id *)arg4 country:(id *)arg5;
- (_Bool)getIMScreenNameValue:(id *)arg1 type:(id *)arg2;
- (_Bool)getMailValue:(id *)arg1 label:(id *)arg2;
- (_Bool)getPhoneValue:(id *)arg1 label:(id *)arg2;
- (_Bool)extractStartDate:(id *)arg1 startTimezone:(id *)arg2 endDate:(id *)arg3 endTimezone:(id *)arg4 allDayRef:(_Bool *)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7;
- (id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id *)arg3 allDayRef:(_Bool *)arg4;
- (double)getDuration;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setSubResults:(id)arg1;
- (id)subResults;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)matchedString;
- (id)contextualData;
- (id)location;
- (id)rawValue;
- (id)value;
- (void)setType:(id)arg1;
- (id)type;
- (long)score;
- (CDStruct_1ef3fb1f)cfRange;
@property struct _NSRange range;
-     // Error parsing type: ^{__DDResult={__CFRuntimeBase=IAI}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=ii}i^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}iCf}8@0:4, name: coreResult
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
-     // Error parsing type: @12@0:4^{__DDResult={__CFRuntimeBase=IAI}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=ii}i^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}iCf}8, name: initWithCoreResult:
- (id)init;

@end
