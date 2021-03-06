//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;

@interface AMSURLResult : NSObject
{
    NSData *_data;
    NSString *_logUUID;
    NSURLSessionTaskMetrics *_taskMetrics;
    NSURLResponse *_response;
    NSURLSessionTask *_task;
    id _object;
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSURLSessionTaskMetrics *taskMetrics; // @synthesize taskMetrics=_taskMetrics;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(readonly, nonatomic) int responseStatusCode;
@property(readonly, nonatomic) NSDictionary *responseHeaders;
@property(readonly, nonatomic) NSString *responseCorrelationId;
- (id)initWithTask:(id)arg1 response:(id)arg2 data:(id)arg3 object:(id)arg4;
- (id)initWithTaskInfo:(id)arg1 object:(id)arg2;
- (id)initWithResult:(id)arg1;

@end

