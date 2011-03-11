/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSData;

@interface PBDataReader : NSObject  {
    NSData *_data;
    unsigned int _pos;
    unsigned int _length;
    BOOL _error;
}

@property unsigned int position;
@property unsigned int length;


- (unsigned long long)readFixed64;
- (float)readFloat;
- (unsigned int)offset;
- (void)setPosition:(unsigned int)arg1;
- (unsigned int)position;
- (id)data;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (unsigned int)length;
- (unsigned long long)readBigEndianFixed64;
- (int)readSfixed32;
- (unsigned short)readBigEndianFixed16;
- (BOOL)readInt8;
- (id)readProtoBuffer;
- (long long)readSint64;
- (int)readSint32;
- (id)readBytes:(unsigned int)arg1;
- (void)setLength:(unsigned int)arg1;
- (BOOL)seekToOffset:(unsigned int)arg1;
- (BOOL)isAtEnd;
- (void)readTag:(unsigned short*)arg1 andType:(char *)arg2;
- (id)readData;
- (BOOL)hasMoreData;
- (BOOL)hasError;
- (unsigned int)readUint32;
- (int)readInt32;
- (id)readString;
- (unsigned int)readFixed32;
- (BOOL)readBOOL;
- (long long)readInt64;
- (BOOL)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (unsigned int)readBigEndianFixed32;
- (long long)readVarInt;
- (long long)readSfixed64;
- (int)read:(const char *)arg1 maxLength:(unsigned int)arg2;
- (double)readDouble;
- (unsigned long long)readUint64;

@end