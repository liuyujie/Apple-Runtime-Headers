//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface MTLIndexedConstantValue : NSObject
{
    unsigned int _index;
    unsigned int _dataType;
    char *_data;
}

@property(readonly) void *data; // @synthesize data=_data;
@property(readonly) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly) unsigned int index; // @synthesize index=_index;
- (id)description;
- (id)formattedDescription:(unsigned int)arg1;
- (id)describe;
- (void)dealloc;
- (id)initWithValue:(const void *)arg1 type:(unsigned int)arg2 index:(unsigned int)arg3;

@end

