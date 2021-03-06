//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSPasteboardReading.h"
#import "NSPasteboardWriting.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CSKFilter : NSObject <NSCopying, NSSecureCoding, NSPasteboardWriting, NSPasteboardReading>
{
    long long _type;
    NSString *_value;
    long long _comparisonType;
}

+ (id)localizedFilterComparisonTypeNameForComparisonType:(long long)arg1;
+ (id)typeForLocalizedFilterTypeName:(id)arg1;
+ (id)localizedFilterTypeNameForType:(long long)arg1;
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)filterWithType:(long long)arg1 value:(id)arg2;
@property(nonatomic) long long comparisonType; // @synthesize comparisonType=_comparisonType;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localizedFilterTypeNameForCurrentType;
- (id)basicDescription;
- (BOOL)isEqualToFilter:(id)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

