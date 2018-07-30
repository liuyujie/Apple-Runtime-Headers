//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SATaskState;

__attribute__((visibility("hidden")))
@interface SAPAStyleTaskData : NSObject
{
    SATaskState *_taskState;
    NSArray *_threadStates;
}

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_71ce830f *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
@property(retain) NSArray *threadStates; // @synthesize threadStates=_threadStates;
@property(retain) SATaskState *taskState; // @synthesize taskState=_taskState;
- (void).cxx_destruct;
- (void)populateReferencesUsingBuffer:(const CDStruct_71ce830f *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;

@end
