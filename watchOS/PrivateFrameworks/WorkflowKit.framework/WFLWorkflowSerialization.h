//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WFLWorkflowSerialization : NSObject
{
}

+ (id)workflowByDeserializingDictionary:(id)arg1 error:(out id *)arg2;
+ (id)dictionaryBySerializingWorkflow:(id)arg1 error:(out id *)arg2;
+ (id)workflowByDeserializingData:(id)arg1 error:(out id *)arg2;
+ (id)dataBySerializingWorkflow:(id)arg1 error:(out id *)arg2;

@end

