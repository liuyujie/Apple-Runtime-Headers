//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString;

@interface TIMecabraIMLogger : NSObject
{
    NSMutableString *_loggedMessage;
}

+ (BOOL)isLoggingEnabled;
@property(retain, nonatomic) NSMutableString *loggedMessage; // @synthesize loggedMessage=_loggedMessage;
- (void).cxx_destruct;
- (void)writeLogToFile;
- (void)endLoggingForInput:(id)arg1 atFinalTimeMark:(unsigned long long)arg2;
- (id)logFilePath;
- (void)markTime:(unsigned long long)arg1;
- (void)beginLogging;

@end

