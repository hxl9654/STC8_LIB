/*//////////////////////////GPL��Դ����֤////////////////////////////////////////////////
    Copyright (C) <2016>  <Xianglong He>
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
	��Ȩ���У�C�� <2016>   <������>
	��һ������������������������������������������GNUͨ�ù�������֤
	�������޸ĺ����·�����һ���������ʹ������֤�ĵ����棬���ߣ�������
	��ѡ�����κθ��µİ汾��
	������һ�����Ŀ����ϣ�������ã���û���κε���������û���ʺ��ض�Ŀ��
	�������ĵ���������ϸ����������GNUͨ�ù�������֤��
	��Ӧ���Ѿ��ͳ���һ���յ�һ��GNUͨ�ù�������֤�ĸ����������û�У����
	��<http://www.gnu.org/licenses/>��
	���ߣ�������
	���䣺qwgg9654@gmail.com
		  568629794@qq.com
	GitHub��hxl9654
	����������STC8��Ƭ������2�ַ���ͨ��ģ��
	��ע������ʹ�÷�װ�õĺ������в���������Ҫʹ��ֱ�ӶԴ��ڽ��в�����
        ʹ�ø�ģ�飬����config.h�ж���UART_BUFF_MAX����Ϊ���ݻ���������󳤶ȡ�
            �� #define UART2_BUFF_MAX 64
        ʹ�ø�ģ�飬����config.h�ж���XTAL����Ϊ����Ƶ�ʣ���λ���׺��ȣ���
            �� #define XTAL 11.059200
*////////////////////////////////////////////////////////////////////////////////////////
#ifndef _STC8_UART2_H_
#define _STC8_UART2_H_
/*///////////////////////////////////////////////////////////////////////////////////
*��������UART2_Conf
*�������ܣ�����STC8��Ƭ������2
*�����б���
*   baud
*       �������ͣ�unsigned long������
*       ����������Ҫ���õĲ�����
*   timer
*       �������ͣ�unsigned char������
*       ����������Ҫʹ�õ����ڲ��������ʵĶ�ʱ����ʵ����Ч������ѡ��ʱ��2���˴����˲�������һ���Կ��ǣ�
*		ע�⣺��Ҫ�������������ѡ�õĶ�ʱ��������ͻ�����ҽ�����ͬ���ڵĲ�����һ��ʱ�ɹ���һ����ʱ����
*////////////////////////////////////////////////////////////////////////////////////
void UART2_Conf(unsigned long baud, unsigned char timer);
/*///////////////////////////////////////////////////////////////////////////////////
*��������UART2_SendString
*�������ܣ��򴮿�2����һ���ַ���
*�����б���
*   *dat
*       �������ͣ�unsigned char��ָ��
*       ����������Ҫ���͵��ַ������׵�ַ
*   len
*       �������ͣ�unsigned char������
*       ����������Ҫ���͵��ַ����ĳ���
*////////////////////////////////////////////////////////////////////////////////////
void UART2_SendString(unsigned char *dat, unsigned char len);
/*///////////////////////////////////////////////////////////////////////////////////
*��������UART2_Driver
*�������ܣ�����2ͨ�ż�غ���������ѭ���е��á�
*         ������յ��ַ��������Զ��������б�д��UART2_Action(unsigned char *dat,unsigned char len)
*////////////////////////////////////////////////////////////////////////////////////
void UART2_Driver();
/*///////////////////////////////////////////////////////////////////////////////////
*��������UART_RxMonitor
*�������ܣ�����2�ַ������ս����жϣ��ڶ�ʱ��0�жϺ����е���
*�����б���
*   ms
*       �������ͣ�unsigned char������
*       ������������ʱ����ʱʱ������λ��ms��
*////////////////////////////////////////////////////////////////////////////////////
void UART2_RxMonitor(unsigned char ms);
/*///////////////////////////////////////////////////////////////////////////////////
*��������UART2_IOPortSwitch
*�������ܣ�����2���ܽ�ѡ��
*�����б���
*   choose
*       �������ͣ�unsigned char������
*       ����������Ҫѡ��Ĺ��ܽ�λ��(��ע�ⲻҪ���������ܵ����ŷ�����ͻ��
					ȡֵ	RxDλ��		TxDλ��
					0		P1.0		P1.1
					1		P4.0		P4.2
*////////////////////////////////////////////////////////////////////////////////////
void UART2_IOPortSwitch(unsigned char choose);
#endif