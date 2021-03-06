/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface DVTConfinementServiceConnection : NSObject
{
    NSString *_serviceName;
    int _connection;
    struct dispatch_queue_s *_connectionQueue;
    struct dispatch_io_s *_connectionIO;
    struct dispatch_queue_s *_asyncResponseHandlerQueue;
    id _asyncResponseHandler;
    struct dispatch_queue_s *_asyncReceiveQueue;
    id _asyncReceiveBlock;
    BOOL _asyncReceiveStopped;
    NSString *_controlPath;
    double _timeout;
    unsigned long long _retryCount;
}

+ (double)defaultTimeout;
+ (long long)defaultRetryCount;
+ (void)initialize;
@property(readonly) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly) double timeout; // @synthesize timeout=_timeout;
@property(readonly) NSString *controlPath; // @synthesize controlPath=_controlPath;
- (void).cxx_destruct;
- (void)stopHandlingMessagesAsynchronously;
- (void)startHandlingResponsesAsynchronouslyOnQueue:(struct dispatch_queue_s *)arg1 handler:(id)arg2;
- (BOOL)receiveFileDescriptors:(int *)arg1 count:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)sendFileDescriptors:(const int *)arg1 count:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)receiveFileDescriptor:(int *)arg1 error:(id *)arg2;
- (BOOL)sendFileDescriptor:(int)arg1 error:(id *)arg2;
- (BOOL)receiveResponse:(id *)arg1 error:(id *)arg2;
- (BOOL)_synchronouslyReceiveResponse:(id *)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (BOOL)sendRequest:(id)arg1 error:(id *)arg2;
- (BOOL)receiveData:(id *)arg1 ofLength:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_receiveData:(id *)arg1 ofLength:(unsigned long long)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (void)_asynchronouslyReceiveDataOfLength:(unsigned long long)arg1 queue:(struct dispatch_queue_s *)arg2 handler:(id)arg3;
- (BOOL)sendData:(id)arg1 error:(id *)arg2;
- (void)_asynchronouslySendData:(id)arg1 queue:(struct dispatch_queue_s *)arg2 handler:(id)arg3;
- (void)closeConnection;
- (BOOL)openConnectionToService:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithControlPath:(id)arg1;

@end

