//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLStructType.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLStructTypeInternal : MTLStructType
{
    unsigned int _dataType;
    NSDictionary *_dictionary;
    NSArray *_members;
    _Bool _isIndirectArgumentBuffer;
}

@property _Bool isIndirectArgumentBuffer; // @synthesize isIndirectArgumentBuffer=_isIndirectArgumentBuffer;
- (unsigned int)dataType;
- (id)members;
- (id)description;
- (id)formattedDescription:(unsigned int)arg1;
- (void)dealloc;
- (id)memberByName:(id)arg1;
- (id)initWithMembers:(id *)arg1 count:(unsigned int)arg2;

@end

