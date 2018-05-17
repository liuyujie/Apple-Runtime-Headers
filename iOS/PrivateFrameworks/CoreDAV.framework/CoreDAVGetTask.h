//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@interface CoreDAVGetTask : CoreDAVTask
{
    id _appSpecificDataItemResult;
    _Bool _forceNoCache;
}

@property(nonatomic) _Bool forceNoCache; // @synthesize forceNoCache=_forceNoCache;
@property(retain, nonatomic) id appSpecificDataItemResult; // @synthesize appSpecificDataItemResult=_appSpecificDataItemResult;
- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (unsigned long long)cachePolicy;
- (id)httpMethod;
- (id)description;

// Remaining properties
@property(nonatomic) __weak id <CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end
