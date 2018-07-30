//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntitiesToGroupsValueTransformer : NSValueTransformer
{
    _Bool _performDefaultSort;
    NSString *_identifierKeyPath;
    NSString *_sortIndexKeyPath;
    CDUnknownBlockType _groupsSortComparator;
}

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
@property(nonatomic) _Bool performDefaultSort; // @synthesize performDefaultSort=_performDefaultSort;
@property(copy, nonatomic) CDUnknownBlockType groupsSortComparator; // @synthesize groupsSortComparator=_groupsSortComparator;
@property(copy, nonatomic) NSString *sortIndexKeyPath; // @synthesize sortIndexKeyPath=_sortIndexKeyPath;
@property(copy, nonatomic) NSString *identifierKeyPath; // @synthesize identifierKeyPath=_identifierKeyPath;
- (void).cxx_destruct;
- (id)transformedValue:(id)arg1;
- (id)initWithIdentifierKeyPath:(id)arg1;
- (id)init;

@end
